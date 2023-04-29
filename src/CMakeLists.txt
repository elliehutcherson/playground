# add the dice library
add_subdirectory(dice)
# add the playground library
add_subdirectory(experimental)

add_executable(playground main.cpp)
target_link_libraries(playground SDL2main SDL2-static SDL2_image)
target_link_libraries(playground dice)
target_link_libraries(playground experimental)