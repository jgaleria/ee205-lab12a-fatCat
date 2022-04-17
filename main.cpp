///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Weight.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Starting Fat Cat" << endl;

    Weight weight = Weight(18.0);
    weight.dump();

    Weight weight2 = Weight(10, Weight:: KILO, 10);
    weight2.dump();

    cout << weight2.getWeight(Weight::POUND);
    return 0;
}
