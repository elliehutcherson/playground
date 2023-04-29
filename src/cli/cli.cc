#include <iostream>
#include <stdio.h>
#include <unordered_map>

#include "../dice/dice.h"
#include "../experimental/experimental.h"
#include "../networking/packet.h"

namespace cli {

enum entry {
    kExperimental,
    kDice,
    kNetworking
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return -1;
    }

    char** first_arg = argv+1;
    switch(first_arg) {
        case "dice":
            dice::Main();
        case "experimental":
            experimental::Main();
        default:
            printf("ERROR: Command not recognized.\n");
            return -1;
    }
    return 0;
}

}