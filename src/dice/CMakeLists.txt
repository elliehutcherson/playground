add_library(
    dice 
    dice.cc
    dice.h
)

target_include_directories(dice PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})