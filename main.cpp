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
  Racional* fraccion=NULL;
  Racional* fraccion1=NULL;
  Racional* fraccion2=NULL;
	while(op!=10){
		switch(op=menu()){
      case 1:{
        int numerador,denominador;
        cout<<"Ingrese numerador: "<<endl;
        cin>>numerador;
        cout<<"Ingrese denominador: "<<endl;
        cin>>denominador;
        fraccion=new Racional(numerador,denominador);
        fracciones.push_back(fraccion);
        cout << "Se ha creado la fraccion exitosamente " <<endl;
          break;
      }
			case 2:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=*fraccion1+*fraccion2;
        cout<< "La suma es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        if(fraccion3.getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" + "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" + "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        }
      }
				break;
			case 3:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        *fraccion1+=*fraccion2;
        cout<< "La suma y asignacion fue: "<<endl;
        cout<< fraccion1->getNumerador()<< "/"<<fraccion1->getDenominador()<<endl;
        if(fraccion1->getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" += "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<"La asignacion fue: "<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<endl;
        }
      }
				break;

			case 4:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=*fraccion1-*fraccion2;
        cout<< "La resta es:  "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        if(fraccion3.getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" - "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" - "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        }

      }

				break;
      case 5:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        *fraccion1-=*fraccion2;
        cout<<"la resta y la asignacion fue: "<<endl;
        cout<< fraccion1->getNumerador()<< "/"<<fraccion1->getDenominador()<<endl;
        if(fraccion1->getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" -= "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<"La asignacion fue: "<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<endl;
        }
      }

        break;
      case 6:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        fraccion1=fracciones[frac1];
        cin>>frac2;
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=(*fraccion1) * (*fraccion2);
        cout<< "La multiplicacion es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        if(fraccion3.getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" * "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" * "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        }
      }

        break;
      case 7:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        *fraccion1*=*fraccion2;
        cout<<"la multplicacion y la asignacion fue: "<<endl;
        cout<< fraccion1->getNumerador()<< "/"<<fraccion1->getDenominador()<<endl;
        if(fraccion1->getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" *="<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<"La asignacion fue: "<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<endl;
        }
      }

        break;
      case 8:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        Racional fraccion3=(*fraccion1) /(*fraccion2);
        cout<< "La division es: "<<endl;
        cout<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" / "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        if(fraccion3.getNumerador()==0){
        }else{
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" / "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<fraccion3.getNumerador()<<"/"<<fraccion3.getDenominador()<<endl;
        }
      }

        break;

      case 9:{
        for (int i = 0; i < fracciones.size(); i++) {
          cout<<i<<" "<<fracciones[i]->getNumerador()<<"/"<<fracciones[i]->getDenominador()<<endl;
        }
        int frac1,frac2;
        cout<< "Ingrese numero de posicion de la primera fraccion: " <<endl;
        cin>>frac1;
        cout<< "Ingrese numero de posicion de la segunda fraccion: "<<endl;
        cin>>frac2;
        fraccion1=fracciones[frac1];
        fraccion2=fracciones[frac2];
        cout<< "Primera Fraccion:" <<endl;
        cout<< fraccion1->getNumerador() <<"/";
        cout<< fraccion1->getDenominador()<<endl;
        cout<< "Segunda Fraccion: "<<endl;
        cout<< fraccion2->getNumerador() <<"/";
        cout<< fraccion2->getDenominador()<<endl;
        (*fraccion1) /=(*fraccion2);
        cout<<"la division y la asignacion fue: "<<endl;
        cout<< fraccion1->getNumerador()<< "/"<<fraccion1->getDenominador()<<endl;
        if(fraccion1->getNumerador()==0){
          salida<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<" /= "<<fraccion2->getNumerador()<<"/"<<fraccion2->getDenominador()<<"="<<"0"<<endl;
        }else{
          salida<<"La asignacion fue: "<<fraccion1->getNumerador()<<"/"<<fraccion1->getDenominador()<<endl;
        }
      }
        break;

      case 10:{
        delete fraccion1;
        delete fraccion;
        delete fraccion2;
        salida.close();

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
