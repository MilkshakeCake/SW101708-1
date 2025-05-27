// Bicycle.h
// Defines the Bicycle class with basic properties and accessors for ID and maker.

#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

// Represents a bicycle with a unique identifier and a maker name.
class Bicycle
{
private:
    std::string id;
    std::string maker;

public:
    // Constructs a Bicycle with the specified ID and maker name.
    // @param id The unique identifier for the bicycle.
    // @param maker The name of the bicycle's manufacturer.
    Bicycle(const std::string &id, const std::string &maker) : id(id), maker(maker) {};

    // Returns the unique identifier of the bicycle.
    // @return A string representing the bicycle ID.
    std::string getID() const;
    // Returns the manufacturer name of the bicycle.
    // @return A string representing the bicycle's maker.
    std::string getMaker() const;
};

#endif