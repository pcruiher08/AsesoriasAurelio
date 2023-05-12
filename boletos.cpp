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

return 0;
}