
set(TEST_SOURCES
        WspTablesTest.cpp)

# For <${MY_LIB}.h> used by tests
include_directories(${CMAKE_SOURCE_DIR}/src/include)

# Build the googletest library from source you have previously cloned into src/test/lib/
set(GTEST_ROOT lib/googletest)
add_subdirectory(${GTEST_ROOT})
# For <gtest/gtest.h>
include_directories(${GTEST_ROOT}/googletest/include)
# Name of the Googletest lib we need
set(GTEST_LIB gtest_main)

# Create new myUnitTests target from test sources and link with ${GTEST}_LIB and ${MY_LIB}
# Call the target  <xx>UnitTests so that compile.sh can run it.
set(UNIT_TESTS myUnitTests)
add_executable(${UNIT_TESTS} ${TEST_SOURCES})
target_link_libraries(${UNIT_TESTS} ${GTEST_LIB} ${MY_LIB})



