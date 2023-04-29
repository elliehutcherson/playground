# If using a non-default compiler, it must be specified before declaring the project. 
set(CMAKE_C_COMPILER /Library/Developer/CommandLineTools/usr/bin/clang)
set(CMAKE_CXX_COMPILER /Library/Developer/CommandLineTools/usr/bin/clang++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)

# set the project name and version
cmake_minimum_required(VERSION 3.12.0)
project(playground VERSION 0.1.0)

include(CTest)
enable_testing()

# https://stackoverflow.com/questions/75551185/cmake-using-sdl2-and-sdl2-image-via-fetchcontent
# This is only way I have found to get SDL_image to build with SDL2 with a static import
# When linking SDL_image, cmake can not find the target SDL_image-static, you must use SDL_image.
set(BUILD_SHARED_LIBS FALSE)
set(SDL2IMAGE_INSTALL OFF)

# add the main executable
add_subdirectory(include/SDL)
add_subdirectory(include/SDL_image)
add_subdirectory(src)

# include must come after adding the subdirectories. 
include_directories(include/SDL/include)
# there is no include directory? SDL_image.h is in the main folder.
include_directories(include/SDL_image)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
