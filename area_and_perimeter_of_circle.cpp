// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area and perimeter of a circle
//    with user input

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a circle
    int radius;
    int area;
    int perimeter;

    //input
	std::cout << "Enter radius of a circle (mm): ";
    std::cin >> radius;

    // process
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
    
    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²" << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
