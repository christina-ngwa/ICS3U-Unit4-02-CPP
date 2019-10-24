// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program finds the factorial of a postive integer

#include <iostream>

main() {
    // This function finds the factorial of a positive integer
    std::string userInputAsString;
    int product = 1;
    int loopCounter = 1;
    int userInput = 0;
    std::cout << "Find the factorial of an integer.\n";

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInputAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        userInput = std::stoi(userInputAsString);
        do {
            std::cout << loopCounter << std::endl;
            product = loopCounter * product;
            loopCounter++;
        } while (loopCounter <= userInput);

        std::cout << "The factorial of " <<userInput << "! is " << product
                  << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
