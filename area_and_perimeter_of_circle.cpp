// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area and perimeter of a circle
//    with radius inputted from the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a circle
    int radiusOfCircle;
    int areaOfCircle;
    int perimeterOfCircle;

    //input
	std::cout << "Enter radius of a circle (mm): ";
    std::cin >> radiusOfCircle;

    // process
    areaOfCircle = M_PI * pow(radiusOfCircle, 2);
    perimeterOfCircle = 2 * M_PI * radiusOfCircle;
    
    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << areaOfCircle << "mm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfCircle << "mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
