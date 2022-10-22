#include <string>
#include <iostream>
#include <exception>

#include "patoganso.hpp"

int main(int argc, char *argv[]) {

    if (argc == 2) {
        try {
            std::cout << ave::patoganso(std::stoi(argv[1]));
            return 0;
        } catch (std::exception const &e) {
            return 1;
        }
    }
    return 2;
}