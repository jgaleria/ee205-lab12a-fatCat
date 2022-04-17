///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Weight.h"
#include <iostream>

using namespace std;

//Weight conversions
const float UNKNOWN_WEIGHT   = -1;
const float KILOS_IN_A_POUND = 0.453592;
const float SLUGS_IN_A_POUND = 0.031081;

//Unit labels
const string Weight::POUND_LABEL = "Pound";
const string Weight::KILO_LABEL  = "Kilo" ;
const string Weight::SLUG_LABEL  = "Slug" ;