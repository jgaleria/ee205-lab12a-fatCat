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

    Weight weight2 = Weight(10.0, Weight:: KILO, 10.0);
    weight2.dump();


    Weight weight3 = Weight( 36.0, Weight::SLUG, 50.0);
    cout << weight3.getWeight();
    weight3.setWeight(45.0);
    cout << weight3.getWeight(Weight::POUND);

//    Weight weight4 = Weight(10.0, 15.0);
//    weight4.setWeight(20.0);
//    weight4.isWeightValid(300.0);

    return 0;
}
