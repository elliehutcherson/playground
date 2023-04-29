add_library(
    experimental 
    experimental.cc
    experimental.h
)

target_include_directories(experimental PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})