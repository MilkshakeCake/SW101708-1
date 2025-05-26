#include "Bicycle.h"

std::string Bicycle::getID() {
    return id;
}

std::string Bicycle::getMaker() {
    return maker;
}

bool Bicycle::getIsRented() {
    return isRented;
}

void Bicycle::setIsRented(bool status) {
    isRented = status;
}