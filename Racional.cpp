#include "Racional.h"
#include <iostream>
using namespace std;

Racional::Racional(){

}

Racional::Racional(int numerador,int denominador){
  this->numerador=numerador;
  this->denominador=denominador;
  for (int i = this->denominador*this->numerador; i > 1; i--) {
      if ((this->denominador%i==0)&&(this->numerador%i==0)){
        this->numerador=this->numerador/i;
        this->denominador=this->denominador/i;
      }
  }
}

int Racional::getNumerador()const{
  return numerador;
}



int Racional::getDenominador()const{
  return denominador;
}



const Racional Racional::operator+(const Racional& rightValue)const{
  int numer;
  int deno;
  numer=(this->numerador*rightValue.getDenominador())+(rightValue.getNumerador()*this->denominador);
  deno=this->denominador*rightValue.getDenominador();
  Racional* suma=new Racional(numer,deno);
  return *suma;
}

const Racional Racional::operator-(const Racional& rightValue)const{
  int numer;
  int deno;
  numer=(this->numerador*rightValue.getDenominador())-(rightValue.getNumerador()*this->denominador);
  deno=this->denominador*rightValue.getDenominador();
  Racional* resta=new Racional(numer,deno);
  return *resta;
}

const Racional Racional::operator*(const Racional& rightValue)const{
  int numer;
  int deno;
  numer=this->numerador*rightValue.getNumerador();
  deno=this->denominador*rightValue.getDenominador();
  Racional* multi=new Racional(numer,deno);
  return *multi;
}

const Racional Racional::operator/(const Racional& rightValue)const{
  int numer;
  int deno;
  numer=this->numerador*rightValue.getDenominador();
  deno=this->denominador*rightValue.getNumerador();
  Racional* multi=new Racional(numer,deno);
  return *multi;
}
