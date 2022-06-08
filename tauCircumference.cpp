// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>

int main() {
    // I am the main function
    std::string strNumber;
    int intNumber;
    float sum = 0;
    float num;

    // input
    std::cout << "How many number do you want to add: ";
    std::cin >> strNumber;

    // process & output
    try {
        intNumber = std::stoi(strNumber);
        for (int counter1 = 0; counter1 < intNumber; counter1++) {
                std::cout << "number: ";
                std::cin >> num;
                if (num > 0) {
                    sum = sum + num;
                } else {
                    continue;
                }
        }
        std::cout << "The sum is " << sum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
