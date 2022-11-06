#pragma once
#include <string>
#include <iostream>

class Money
{
private:
    long int Gryvnya;
    unsigned char Kopiyka;
    int Indykator;

public:
    Money();
    Money(int G, char K, int I);
    Money Init(int G, char K, int I);
    Money Read();
    void Display();
    std::string toString();
    Money sum(Money M);
    Money sub(Money M);
    Money comparison(Money M);
    Money result(Money R);
};
