#include "Money.h"
#include <string>
#include <iostream>
using namespace std;

Money::Money()
{
    Gryvnya = 0;
    Kopiyka = 0;
    Indykator = 0;
}

Money::Money(int G, char K, int I)
{
    Gryvnya = G;
    Kopiyka = K;
    Indykator = I;
}

Money Money::Init(int G, char K, int I)
{
    Money tmp;
    tmp.Gryvnya = G;
    tmp.Kopiyka = K;
    return tmp;
}

Money Money::Read()
{
    Money tmp;
    cin >> tmp.Gryvnya;
    cin >> tmp.Kopiyka;
    return tmp;
}

void Money::Display()
{
    cout << Gryvnya << "," << static_cast<int>(Kopiyka) << endl;
}

std::string Money::toString()
{
    std::string tmp;
    tmp = (int)Gryvnya + "," + (char)Kopiyka;
    return tmp;
}

Money Money::sum(Money M)
{
    Money tmp;
    int k = 0;
    if ((this->Kopiyka + M.Kopiyka) >= 100)
    {
        tmp.Kopiyka = (this->Kopiyka + M.Kopiyka) - 100;
        k = 1;
    }
    else
        tmp.Kopiyka = this->Kopiyka + M.Kopiyka;
    tmp.Gryvnya = this->Gryvnya + M.Gryvnya + k;
    cout << "Resultat dodavanya: ";
    return tmp;
}

Money Money::sub(Money M)
{
    Money tmp;
    int n = 0;
    if ((this->Kopiyka - M.Kopiyka) < 0)
    {
        tmp.Kopiyka = (this->Kopiyka - M.Kopiyka) + Indykator;
        n = 1;
    }
    else
        tmp.Kopiyka = this->Kopiyka - M.Kopiyka;
    tmp.Gryvnya = this->Gryvnya - M.Gryvnya - n;
    cout << "Resultat vidnimannya: ";
    return tmp;
}

Money Money::comparison(Money M)
{
    if (Gryvnya < M.Gryvnya)
    {
        cout << "Pershe chyslo menshe nish druge" << endl;
    }
    else
        cout << "Pershe chyslo bil'she nish druge" << endl;
    return Money();
}

Money Money::result(Money R)
{
    this->Gryvnya = R.Gryvnya;
    this->Kopiyka = R.Kopiyka;
    return Money();
}