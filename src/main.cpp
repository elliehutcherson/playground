#include <iostream>
#include <stdio.h>
// #include <ranges>

// #include "dice/dice.h"
// #include "experimental/experimental.h"


int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return -1;
    }

    std::cout << *argv << std::endl;

    return 0;
}