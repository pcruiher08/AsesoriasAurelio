#include <algorithm>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){


int cantidadDeCiudades = 3; 
//arreglo estatico de ciudades declarado y asignado
string ciudades[] = {"CDMX", "Monterrey", "Guadalajara"};

cout<<"Imprimiendo el arreglo de ciudades"<<endl;
for(int i = 0; i < cantidadDeCiudades; i++){
    cout<<ciudades[i]<<endl;
}



//el primer elemento del par es de tipo string, y el segundo de tipo int


int cantidadDePaises = 4;

//arreglo estatico de paises declarado y luego asignado
string paises[cantidadDePaises];

paises[0] = "Alemania";
paises[1] = "Mexico";
paises[2] = "Canada";
paises[3] = "Argentina";


cout<<"Imprimiendo el arreglo de paises"<<endl;
for(int i = 0; i < cantidadDePaises; i++){
    cout<<paises[i]<<endl;
}



//se declara un arreglo de tipo pair<string, int> para poder guardar pares (o tuplas)
pair<string, int> datosboletos[] = {{"CDMX", 15}, {"Monterrey", 12}, {"Guadalajara", 0}};

//para recorrerlo es igual, pero se usan las palabras reservadas first y second para acceder al primer y segundo elemento del par respectivamente
for(int i = 0; i < cantidadDeCiudades; i++){
    cout<<"La ciudad es: " << datosboletos[i].first << " y los boletos que hay son: "<< datosboletos[i].second<<endl;
}

//tambien se puede acceder al arreglo para hacer modificaciones
//por ejemplo para decir que se vendieron otros cinco boletos para CDMX seria


datosboletos[0].second += 5;

//entonces se imprime de la siguiente manera
cout<<"Arreglo modificado"<<endl;
for(int i = 0; i < cantidadDeCiudades; i++){
    cout<<"La ciudad es: " << datosboletos[i].first << " y los boletos que hay son: "<< datosboletos[i].second<<endl;
}

return 0;
}