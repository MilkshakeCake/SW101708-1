#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

class Bicycle
{
private:
    std::string id;
    std::string maker;
    bool isRented;

public:
    Bicycle(const std::string &id, const std::string &maker) : id(id), maker(maker), isRented(false) {};
    std::string getID();
    std::string getMaker();
    bool getIsRented();
    void setIsRented(bool status);
};

#endif