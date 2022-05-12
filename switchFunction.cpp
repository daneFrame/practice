///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  practice - EE 205 - Spr 2022
///
/// @file switchFunction.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include "switchFunction.h"

#include <iostream>

int legs;

void switchFunction() {
    std::cout << "How many legs do you have?" << std::endl;
    std::cin >> legs;

    switch (legs) {
        case 1 : std::cout << "You are a pirate!" << std::endl;
        break;
        case 2 : std::cout << "You are a person!" << std::endl;
        break;
        case 3 : std::cout << "You are well hung!" << std::endl;
        break;
        case 4 : std::cout << "You are a quadruped!" << std::endl;
        break;
        case 5 : std::cout << "You are a well hung quadruped!" << std::endl;
        break;
        case 6 : std::cout << "You are some kinda bug!" << std::endl;
        break;
        case 7 : std::cout << "You are some kinda bug!" << std::endl;
        break;
        case 8 : std::cout << "You are a spider!" << std::endl;
    }
}