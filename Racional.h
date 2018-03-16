#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Racional{
  private:
    int numerador;
    int denominador;

  public:
    Racional();
    Racional(int,int);
    int getNumerador()const;

    int getDenominador()const;
  
    const Racional operator+(const Racional&)const;
    Racional operator+=(const Racional&)const;
    const Racional operator-(const Racional&)const;
    Racional operator-=(const Racional&)const;
    const Racional operator*(const Racional&)const;
    Racional operator*=(const Racional&)const;
    const Racional operator/(const Racional&)const;
    Racional operator/=(const Racional&)const;

};
#endif
