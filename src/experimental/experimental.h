#include <iostream>
#include <bitset>
#include <climits>

namespace experimental {

struct playground {
#if defined(unix) || defined(__unix__) || defined(__unix)
    u_int16_t first: 4;
    u_int16_t second: 8;
    u_int16_t third: 4;
#else
    u_int16_t first: 2;
    u_int16_t second: 4;
    u_int16_t third: 10;
#endif
};


void TestOne();

void TestTwo();

void Main();

}  // namespace experimental