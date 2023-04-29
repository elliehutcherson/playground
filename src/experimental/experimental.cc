#include "experimental.h"

#include "SDL.h"

namespace experimental {

void TestOne() {
    // unsigned char var_char = 0xff;
    unsigned char var_char = 0;
    short var_short;
    int var_int;
    long var_long;
    playground var_playground;
    std::cout << "sizeof(var_char) = " << sizeof(var_char) << std::endl;
    std::cout << "var_char = " << var_char << std::endl;
    std::cout << "(int)var_char = " << (int)var_char << std::endl;
    std::cout << "var_char = " << std::bitset<8>(var_char).to_string() << std::endl;
    std::cout << "sizeof(var_short) = " << sizeof(var_short) << std::endl;
    std::cout << "sizeof(var_int) = " << sizeof(var_int) << std::endl;
    std::cout << "sizeof(var_long) = " << sizeof(var_long) << std::endl;
    std::cout << "sizeof(var_playground) = " << sizeof(var_playground) << std::endl;
}

void TestTwo() {
    playground pg;
    pg.first = 0;
    pg.second = 0;
    pg.third = 0;

    std::cout << "sizeof(u_int16_t) = " << sizeof(u_int16_t) << std::endl;

    std::cout << "pg.first = " << pg.first << std::endl;
    std::cout << "pg.second = " << pg.second << std::endl;
    std::cout << "pg.third = " << pg.third << std::endl;
    
    std::cout << "bitset pg.first = " << std::bitset<CHAR_BIT * sizeof(playground)>(pg.first).to_string() << std::endl;
    std::cout << "bitset pg.second = " << std::bitset<CHAR_BIT * sizeof(playground)>(pg.second).to_string() << std::endl;
    std::cout << "bitset pg.third = " << std::bitset<CHAR_BIT * sizeof(playground)>(pg.third).to_string() << std::endl;
}

void TestThree() {
    SDL_Rect rect;
    rect.h = 0;
    std::cout << "rect.h = " << rect.h << std::endl;
}

void Main() {
    // TestTwo();
    TestThree();
}

}  // namespace experimental