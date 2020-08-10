// Copyright (C) 2020 Marcus A. Mosley All rights reserved
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program calculates the area and circumference of a circle
//   with radius 15mm

#include <iostream>
#include <cmath>

int main()  {
    std::cout << "If a circle has a radius of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Circumference is " << (2*M_PI*15) << "mm" << std::endl;
}
