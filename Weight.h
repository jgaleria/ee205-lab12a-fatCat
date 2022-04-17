///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Joshua Galeria <jgaleria@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>

using namespace std;

class Weight {
public:
    //Enum and consts
    enum UnitOfWeight { POUND, KILO, SLUG };

    //Weight conversions
    static const float UNKNOWN_WEIGHT;
    static const float KILOS_IN_A_POUND;
    static const float SLUGS_IN_A_POUND;

    //Unit labels
    static const string POUND_LABEL;
    static const string KILO_LABEL;
    static const string SLUG_LABEL;

private:
    //Private member variables
    bool bIsKnown;
    bool bHasMax;

    enum UnitOfWeight unitOfWeight;

    float weight;
    float MaxWeight;

public:
    //Constructors
    Weight() noexcept;
    Weight( float newWeight ) noexcept;
    Weight( UnitOfWeight newUnitOfWeight ) noexcept;
    Weight( float newWeight, UnitOfWeight newUnitOfWeight );
    Weight( UnitOfWeight newUnitOfWeight, float newMaxWeight );
    Weight( float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight );

public:
    //Getters and setters
    


};

