// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 11 2022
// This program asks the user for a integer it then tells
// them if its positive, negative or zero


#include <iostream>

// declare userNum as a variable
float userNum;

int main() {
    // get the number the user guessed
    std::cout << "Enter the a integer: ";
    std::cin >> userNum;

    // If statement to see if the user guessed the correct number
    if (userNum >= 1) {
        // If true then display "Your number is positive"
        std::cout << "Your number is positive \n";
    } else if (userNum <= -1) {
        // If true then display "Your number is negative"
        std::cout << "Your number is negative \n";
        // Otherwise display "Your number is zero"
    } else {
        std::cout << "Your number is zero \n";
    }
}
