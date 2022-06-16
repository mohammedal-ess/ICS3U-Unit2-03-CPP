// Copyright 2022. MTHS
// Created by: Muhammed el A
// Created on: March 2022
// This program calculates the circumference of a circle
// with user input

#include <iostream>


int main() {
    // this function calculates
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
