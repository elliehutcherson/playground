cmake_minimum_required(VERSION 3.12.0)

# set the project name and version
project(playground VERSION 0.1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
enable_testing()

# add the dice library
add_subdirectory(src/dice)

# add the playground library
add_subdirectory(src/experimental)

# add the main executable
add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
