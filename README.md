Example (CLion) project to import a googletested C++ function into Python using pybind11 :-
-
- **Introduction**
- **Requirements**
- **Project targets**
- **Project files**
- **in-source** vs **out-of-source**:
- **CLion tips**
- **CMake**
- **pybind11**
- **Contact**


**Introduction**

What a palaver! The aim is that you should be able to build and install a Python
module that provides access to a library you wrote in C++ (and tested with googletest), for
which you provided a Pybind11 interface.  
You should be able to do this from CLion, or else by running the script `./compile.sh` 
```
$ ./compile.sh
$ echo $?
0
```

Then you should be able to start up Python, import the module and run a function from it.
```
$ python
Python 2.7.12 (default, Dec  4 2017, 14:50:18) 
[GCC 5.4.0 20160609] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> import wsptables
>>> wsptables.wsp_HPT(130, 560)
835.96568164127928
>>> wsptables.wsp_HPT(130, 460)
770.74384112939595
>>> quit()
``` 

**Requirements**
- Python3 
    - If you really must use Python2 (e.g Python 2.7) then insert 
 `set(PYBIND11_PYTHON_VERSION 2.7 CACHE STRING "")` before
 `add_subdirectory(${PYBIND11})` in the top-level `CMakeLists.txt`
- gcc
- CMake
- JetBrains CLion
- This project assumes Linux (actually Ubuntu). **If you come up with a set of instructions/scripts
for Windows or MacOS please let me know and we can find a way to include them.**
- googletest - cloned from: `git@github.com:google/googletest.git` - see instructions below.
- pybind11 - cloned from `git@github.com:pybind/pybind11.git` - see instructions below  
Pybind11 docs: <https://pybind11.readthedocs.io/en/master/index.html> 

**Project targets**
- The script `compile.sh` builds 3 targets `WspTablesLib`, `wsptables` and `myUnitTests`
    - It creates them in the directory `build`
    - [If you run unit tests in CLion then it also builds `WspTablesLib` and `myUnitTests` (see **Clion tips** below).]
- CMake target `WspTablesLib` builds the shared library: `libWspTablesLib.so` , which is used by the python module and the tests.
- CMake target `wsptables` compiles `PyModule.cpp`, which includes `pybind11` source, and links with `WspTablesLib` to build the Python module (shared library) `wsptables.so`
    - A custom-command then copies it to your Python distribution directory.
    - You should make sure your `$PYTHONPATH` and `$LD_LIBRARY_PATH` contain this distribution directory.
        - The script `compile.sh` shows how to do this idempotently.
- CMake target `myUnitTests` is an executable that runs the unit tests outside of CLion.
- Python looks for modules in `$PYTHONPATH`.
    - So we need to copy `wsptables.so` to a directory and add that directory to `$PYTHONPATH`
- If the Python shared library module `wsptables.so` needs another library then that needs to be in `$LD_LIBRARY_PATH`
    - So we need to copy `libwsptablesLib.so` to a directory and add that directory to `$LD_LIBRARY_PATH`


**Project files**
- `CMakeLists.txt` - top-level CMake file that calls the other `main` and `test` CMake files.
- `compile.sh` 
    1) idempotently adds the user's home directory `~` to `$PYTHONPATH` and `$LD_LIBRARY_PATH`.
    2) creates the directory `build` to hold the artifacts.
    3) runs `cmake` and then `make`.
- `src\include`
    - `WspTablesLib.h` - public interface include file. It's used by by the sources,
    and by any other C++, such as tests, that wants to use `libWspTablesLib.so`.
- `src/main`
    - `CMakeLists.txt` - CMake for the main targets: `WspTablesLib` and `wsptables`.
    - `WspTables.cpp WspTables_p.h` - private C++ source of our function (that we want to import into Python).
    - `PyModule.cpp` - pybind11 interface of our function in the Python module `wsptables.so`.
    - `lib/pybind11` - pybind11 C++ source code.
        - Not a library - it's `#include`-d in `PyModule.cpp`.
        - Cloned from: `git@github.com:pybind/pybind11.git`.
        - Delete all its `.git*` files, and then move it into the `main/lib` directory so your git picks it up.  
            - The script `reinstall_pybind11.sh` will do this for you (run it from the project home directory).
- `src/test`
    - `CMakeLists.txt` - CMake for test target: `myUnitTests`.
    - `WspTablesTest.cpp` - googletests of the `WspTablesLib` library.
    - `lib/googletest` - googletest C++ source code.
        - It is a library that is linked to the tests.
        - Cloned from: `git@github.com:google/googletest.git`.
        - Delete all its `.git` files, and then move it into the `test/lib` directory so your git picks it up.
            - The script `reinstall_googletest.sh` will do this for you (run it from the project home directory).
- `build` - temporary directory containing targets and artifacts.
    - Auto-generated, not under source code control
    - Regenerated by running `compile.sh`.
- `cmake-build-debug` - another temporary directory, created by CLion.
    - Annoyingly generated by CLion until you set out-of-source dir to `build` (see **CLion tips** below).


**in-source** vs **out-of-source** builds in `compile.sh` and CLion builds
- An **in-source** build creates build artifacts next to files in the source tree.
    - You can do this by running `cmake` (and `make`) in the project directory.
        - **DON'T DO THIS** it will create build arifacts throughout your source tree - hard to get rid of them.
- An **out-of-source** build creates build artifacts in a directory (structure) that you choose.
    - Easy to remove and re-generate all build artifacts: just delete the out-of-source build dir and re-make.
    - The script `compile.sh` does this by creating a directory, `build`, `cd`-ing to it and running `cmake` and `make` from there.
- By default CLion builds out-of-source in the directory `cmake-build-debug`, but you can change this (see **CLion Tips** below).


**CLion tips:**
- [GOTCHA Can't edit any files? CLion uses VIM by default. Get rid of VIM by removing the VIM plugin.]
- Clone this template project from GitHub, then clone it locally:
    - `git clone git@github.com:adrianredgers/cmake-googletest-pybind11-example.git` 
    - `git clone cmake-googletest-pybind11-example <your-new-directory>`.
- Navigate to the new project and open it in CLion:
    - `Import Project...`, or `Import Project from Sources`.
    - In response to the dialogue box, select `Import Project`. Do **not** select `Overwrite CMakeLists.txt`.
- Note: `Ctrl-Shift-T` does not work for switching to tests, but `Ctrl-Shift-F10` still runs tests.
- Optional, but probably worthwhile, is marking `src` as a source directory:
    - Right-click on project window.
    - Select `Mark directory as > Project Sources and Headers`.
- Optional convenience step: set out-of-source build directory in CLion:
    - In `File menu > Settings > Build, Generation, Deployment > CMake`  set the `Generation path:` to `build`.
    - Optional because it means CLion puts all build artifacts in the directory `build`, instead of some of them in `cmake-build-debug`.
- You can always delete `build` and `cmake-build-debug` and regenerate them with a rebuild.
- CLion CMake is lazy - only builds what it uses.
    - So it builds the `WspTablesLib` and `myUnitTests` needed to run tests in CLion.
    - But it does not build the Python module target `wsptables`
    - Hence the need for `compile.sh`


**CMake tips:**
- This project sets the location of each created target individually with `set_target_properties`.
    - Alternatively, they could be set globally by setting `CMAKE_*_OUTPUT_DIRECTORY*`.
- Ob. Hack: `pybind11_add_module` has a _feature_ that causes it to look for Python 3.5.
    - So we need to set `PYBIND11_PYTHON_VERSION` before you add the pybind11 sub-directory.
    - Some details of this in <https://github.com/pybind/pybind11/issues/587>  
- Note the use of keywords like `SHARED` and `PRIVATE`.

**pybind11**
- pybind11 is quite tricky to configure.
- <https://zenodo.org/record/239703/files/pybind11%20basics.pdf>


**Contact me**
- This is my first attempt at a lot of things - CMake, CLion, googletest, python, pybind11, C++, GitHub, README ml.
- I would be grateful for any (non-painful) suggestions:-
    - aredgers@yahoo.com
        

