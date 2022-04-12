// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The proper format "Hello, World!"

#include <iostream>

int main() {
    // this function calculates circumference
    int width;
    int height;
    // input
    std::cout << "enter width: ";
    std::cin >> width;
    std::cout << "enter height: ";
    std::cin >> height;

    // process
    if (width == height) {
        std::cout << "it is a square" << std::endl;
    } else {
    std::cout << "it is a rectangle" << std::endl;
    }
    // output
    std::cout << "\nDone." << std::endl;
}
