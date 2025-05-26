#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

class Bicycle
{
private:
    std::string id;
    std::string maker;

public:
    // constructor
    Bicycle(const std::string &id, const std::string &maker) : id(id), maker(maker) {};

    // Get ID
    std::string getID() const;
    // Get maker
    std::string getMaker() const;
};

#endif