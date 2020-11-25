// Copyright (C) 2002 Donggeun Lim All rights reserved
//
// Created by Donggeun Lim
// Created on November 2020
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    // this function calculates circumference of a circle
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
}
