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
#include <cassert>

//Weight conversions
const float UNKNOWN_WEIGHT   = -1;
const float KILOS_IN_A_POUND = 0.453592;
const float SLUGS_IN_A_POUND = 0.031081;

//Unit labels
const std::string Weight::POUND_LABEL = "Pound";
const std::string Weight::KILO_LABEL  = "Kilo" ;
const std::string Weight::SLUG_LABEL  = "Slug" ;

///////////////////
///Constructors
//////////////////

//First instance
Weight::Weight() noexcept {
    bIsKnown = false;
    bHasMax  = false;
    unitOfWeight = POUND;
    weight = UNKNOWN_WEIGHT;
    MaxWeight = UNKNOWN_WEIGHT;
};

// Only adding weight
Weight::Weight( float newWeight ) {
    bIsKnown = false;
    bHasMax  = false;
    unitOfWeight = POUND;
    weight = newWeight;
    MaxWeight = UNKNOWN_WEIGHT;
}

// Defaulting the unit of weight
Weight::Weight( Weight::UnitOfWeight newUnitOfWeight ) noexcept {
    bIsKnown = true;
    bHasMax  = false;
    unitOfWeight = newUnitOfWeight;
    weight = UNKNOWN_WEIGHT;
    MaxWeight = UNKNOWN_WEIGHT;
}

// Defaulting weight and unit
Weight::Weight( float newWeight, Weight::UnitOfWeight newUnitOfWeight ) {
    bIsKnown = true;
    bHasMax  = false;
    unitOfWeight = newUnitOfWeight;
    weight = newWeight;
    MaxWeight = UNKNOWN_WEIGHT;
}

// Defaulting weight and max weight
Weight::Weight( float newWeight, float newMaxWeight ) {
    bIsKnown = true;
    bHasMax  = true;
    unitOfWeight = POUND;
    weight = newWeight;
    MaxWeight = newMaxWeight;
}

//Defaulting unit and max weight
Weight::Weight( Weight::UnitOfWeight newUnitOfWeight, float newMaxWeight ) {
    bIsKnown = false;
    bHasMax  = true;
    unitOfWeight = newUnitOfWeight;
    weight = UNKNOWN_WEIGHT;
    MaxWeight = newMaxWeight;
}

//Defaulting weight, unit, and max
Weight::Weight( float newWeight, Weight::UnitOfWeight newUnitOfWeight, float newMaxWeight ) {
    bIsKnown = true;
    bHasMax  = true;
    unitOfWeight = newUnitOfWeight;
    weight = newWeight;
    MaxWeight = newMaxWeight;
}

///////////////////////////
/// Getters and setters
//////////////////////////
bool Weight::isWeightKnown() const noexcept {
    return bIsKnown;
}

bool Weight::hasMaxWeight() const noexcept {
    return bHasMax;
}

float Weight::getWeight() const noexcept {
    assert( isWeightValid( weight ));
    return weight;
}

float Weight::getWeight( Weight::UnitOfWeight weightUnits ) const noexcept {
    assert( isWeightValid( weight ));
    float fullWeight = convertWeight( weight, unitOfWeight, weightUnits );
    return fullWeight
}

float Weight::getMaxWeight() const noexcept {
    return MaxWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept {
    return unitOfWeight;
}

void Weight::setWeight( float newWeight ) {
    weight = newWeight;
}

void Weight::setWeight( float newWeight, Weight::UnitOfWeight weightUnits ) {
    weight = newWeight;
    unitOfWeight = weightUnits;
}

///////////////////////
/// Checks and methods
///////////////////////
bool Weight::isWeightValid( float checkWeight ) const noexcept {
    assert( (checkWeight > 0 ) || checkWeight == Weight::UNKNOWN_WEIGHT );
    if( bHasMax ) {
        assert(checkWeight <= MaxWeight);
    }
    return true;
}

bool Weight::validate() const noexcept {
    assert(isWeightValid(weight));
    assert(isWeightValid(MaxWeight));
    return true;
}

void Weight::dump() const noexcept {
    std::cout << "===================================" << std::endl;
    std::cout << "bIsKnown:   " << bIsKnown << std::endl;
    std::cout << "bHasMax:    " << bHasMax  << std::endl;
    std::cout << "Unit:       " << unitOfWeight << std::endl;
    std::cout << "Weight:     " << weight    << std::endl;
    std::cout << "Max Weight: " << MaxWeight << std::endl;
}

