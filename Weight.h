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

#include <string>

class Weight {
public:
    //Enum and consts
    enum UnitOfWeight { POUND, KILO, SLUG };

    //Weight conversions
    static const float UNKNOWN_WEIGHT;
    static const float KILOS_IN_A_POUND;
    static const float SLUGS_IN_A_POUND;

    //Unit labels
    static const std::string POUND_LABEL;
    static const std::string KILO_LABEL;
    static const std::string SLUG_LABEL;

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
    Weight( float newWeight );
    Weight( UnitOfWeight newUnitOfWeight ) noexcept;
    Weight( float newWeight, UnitOfWeight newUnitOfWeight );
    Weight( float newWeight, float newMaxWeight );
    Weight( UnitOfWeight newUnitOfWeight, float newMaxWeight );
    Weight( float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight );

public:
    //Getters and setters
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;

    float getWeight() const noexcept;
//    float getWeight(UnitOfWeight weightUnits ) const noexcept;
    float getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    void setWeight( float newWeight );
    void setWeight( float newWeight, UnitOfWeight weightUnits );

    bool isWeightValid( float checkWeight ) const noexcept;
    bool validate() const noexcept;
    void dump() const noexcept;


};

