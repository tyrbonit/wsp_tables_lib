# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\YandexDisk\PycharmProjects\wsp_tables

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables

# Include any dependencies generated for this target.
include src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/flags.make

src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/flags.make
src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/includes_CXX.rsp
src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: ../src/test/lib/googletest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj"
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gtest.dir\src\gtest-all.cc.obj -c D:\YandexDisk\PycharmProjects\wsp_tables\src\test\lib\googletest\googletest\src\gtest-all.cc

src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\YandexDisk\PycharmProjects\wsp_tables\src\test\lib\googletest\googletest\src\gtest-all.cc > CMakeFiles\gtest.dir\src\gtest-all.cc.i

src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\YandexDisk\PycharmProjects\wsp_tables\src\test\lib\googletest\googletest\src\gtest-all.cc -o CMakeFiles\gtest.dir\src\gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.obj"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtestd.a: src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj
lib/libgtestd.a: src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/build.make
lib/libgtestd.a: src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\..\..\lib\libgtestd.a"
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean_target.cmake
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/build: lib/libgtestd.a

.PHONY : src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/build

src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/clean:
	cd /d D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean.cmake
.PHONY : src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/clean

src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\YandexDisk\PycharmProjects\wsp_tables D:\YandexDisk\PycharmProjects\wsp_tables\src\test\lib\googletest\googletest D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest D:\YandexDisk\PycharmProjects\wsp_tables\cmake-build-wsptables\src\test\lib\googletest\googletest\CMakeFiles\gtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/test/lib/googletest/googletest/CMakeFiles/gtest.dir/depend

