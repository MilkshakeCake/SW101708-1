// Bicycle.cpp
// Implementation of the Bicycle class.
// Provides accessor methods for bicycle ID and maker information.

#include "Bicycle.h"

// Returns the unique identifier of the bicycle.
// @return A string representing the bicycle ID.
std::string Bicycle::getID() const {
    return id;
}

// Returns the manufacturer name of the bicycle.
// @return A string representing the bicycle's maker.
std::string Bicycle::getMaker() const {
    return maker;
}