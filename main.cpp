#include "Racional.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ios>
#include <vector>
using namespace std;
//funcion menu
int menu();

int main(int argc, char const *argv[]) {
  int op=0;
  vector<Racional*>fracciones;
  ofstream salida("log.txt",ios::app);
	while(op!=9){
		switch(op=menu()){
      case 1:{
        int numerador,denominador;
        cout<<"Ingrese numerador: "<<endl;
        cin>>numerador;
        cout<<"Ingrese denominador: "<<endl;
        cin>>denominador;
        Racional* fraccion=new Racional(numerador,denominador);
          break;
      }
			case 2:{

        Racional* fraccion1=;
        Racional* fraccion2=;
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=*fraccion1+*fraccion2;
        cout<< "La suma es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<"+"<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        delete fraccion1;
        delete fraccion2;
        salida.close();
      }
				break;
			case 3:{


      }
				break;

			case 4:{
        int numerador1,denominador1,numerador2,denominador2;
        cout<<"Ingrese numerador de la primera fraccion: "<<endl;
        cin>>numerador1;
        cout<<"Ingrese denominador de la primera fraccion: "<<endl;
        cin>>denominador1;
        cout<<"Ingrese numerador de la segunda fraccion: "<<endl;
        cin>>numerador2;
        cout<<"Ingrese denominador de la segunda fraccion: "<<endl;
        cin>>denominador2;
        Racional* fraccion1=new Racional(numerador1,denominador1);
        Racional* fraccion2=new Racional(numerador2,denominador2);
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=*fraccion1-*fraccion2;
        cout<< "La resta es:  "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<"-"<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        delete fraccion1;
        delete fraccion2;

      }

				break;
      case 5:{

      }

        break;
      case 6:{
        int numerador1,denominador1,numerador2,denominador2;
        cout<<"Ingrese numerador de la primera fraccion: "<<endl;
        cin>>numerador1;
        cout<<"Ingrese denominador de la primera fraccion: "<<endl;
        cin>>denominador1;
        cout<<"Ingrese numerador de la segunda fraccion: "<<endl;
        cin>>numerador2;
        cout<<"Ingrese denominador de la segunda fraccion: "<<endl;
        cin>>denominador2;
        Racional* fraccion1=new Racional(numerador1,denominador1);
        Racional* fraccion2=new Racional(numerador2,denominador2);
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=(*fraccion1) * (*fraccion2);
        cout<< "La multiplicacion es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<"*"<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        delete fraccion1;
        delete fraccion2;
      }

        break;
      case 7:{

      }

        break;
      case 8:{
        int numerador1,denominador1,numerador2,denominador2;
        cout<<"Ingrese numerador de la primera fraccion: "<<endl;
        cin>>numerador1;
        cout<<"Ingrese denominador de la primera fraccion: "<<endl;
        cin>>denominador1;
        cout<<"Ingrese numerador de la segunda fraccion: "<<endl;
        cin>>numerador2;
        cout<<"Ingrese denominador de la segunda fraccion: "<<endl;
        cin>>denominador2;
        Racional* fraccion1=new Racional(numerador1,denominador1);
        Racional* fraccion2=new Racional(numerador2,denominador2);
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=(*fraccion1) /(*fraccion2);
        cout<< "La division es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<"/"<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        delete fraccion1;
        delete fraccion2;

      }

        break;

      case 9:{

      }

        break;

      case 10:{

      }
        break;
		}
	}

  return 0;
}

int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu***********"<<endl;
    cout<<"1.Crear una fraccion"<<endl;
		cout<<"2.Suma"<<endl;
    cout<<"3.Suma y asignacion" <<endl;
    cout<<"4.Resta"<<endl;
    cout<<"5.Resta y asignacion"<<endl;
    cout<<"6.Multiplicacion"<<endl;
    cout<<"7.Multplicacion y asignacion"<<endl;
    cout<<"8.Division"<<endl;
    cout<<"9.Division asignacion"<<endl;
    cout<<"10.Salir"<<endl;
		cout<<"Ingrese numero de opcion que desea evaluar: ";
		cin>> num;
		return num;
	}

}
