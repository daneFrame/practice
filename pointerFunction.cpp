///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  practice - EE 205 - Spr 2022
///
/// @file pointerFunction.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include "pointerFunction.h"

#include <iostream>

using namespace std;

void pointerFunction(){
int n = 69;
int *ptr = &n;
std::cout << n <<
std::endl;
std::cout << "The address of my pointer is " << ptr <<
std::endl;
std::cout << "My dereferenced pointer is " << *ptr <<
std::endl;
return;
};