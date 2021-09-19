// Copyright (c) 2021 Matthew Meech All rights reserved.
// Created by: Matthew Meech
// Created on: Sep 2021
// This program is a random number guessing game

#include <iostream>

int main() {
    const int RIGHT_ANSWER = 5;
    int number;

    // input
    std::cout << "Enter the number 0-9: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process
    if (number > RIGHT_ANSWER)
    // output
        std::cout << "wrong answer!";
    // process
    if (number < RIGHT_ANSWER)
    // output
        std::cout << "wrong answer!";
    // process
    if (number == RIGHT_ANSWER) {
    // output
        std::cout << "right answer!";
    }
}
