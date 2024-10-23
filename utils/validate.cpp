//
// Created by xxtex on 10/23/2024.
//
#include <iostream>
#include "validate.hpp"

std::string input;

void validate(const std::string& input) {
    if(input.length() == 6 && isalpha(input[0])  && isalpha(input[1]) && isdigit(input[2])
         && isdigit(input[3]) && isdigit(input[4]) && isdigit(input[5])) {
        std::cout << "valid ID";
    }
    else {
        std::cout << "invalid ID";
    }
}
