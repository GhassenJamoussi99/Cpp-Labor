#ifndef CADDRESS_H
#define CADDRESS_H

#include <iostream>

class CAddress
{
public:
    CAddress();
    void print() const;
    ~CAddress(){};

private:
    std::string Street;
    std::string HouseNr;
    unsigned Zipcode;
    std::string City;
};

#endif