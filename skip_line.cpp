// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program loops from 1000 to 2000

#include <iostream>
    // variables
    int counter = 1;

int main() {
    // process & output
    for (counter = 1000; counter < 2000 + 1; counter++) {
        if (counter % 5 == 0) {
            std::cout << "\n" << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }
}
