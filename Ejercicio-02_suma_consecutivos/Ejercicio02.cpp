/*
    Elabora un programa que reciba un número entre 1 y 50 
    y devuelva la suma de los números
     consecutivos del 1 hasta ese número.

    MOISES MEDINA PORRAS
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    bool dentroRango;
    int numeroRecibir;
    int sumaNumeros=0;
    do{
        cout << "Por favor, ingresa un número entero entre el 1 y el 50: ";
        cin >> numeroRecibir;  

        //verificar que el numero este dentro del rango
        if((numeroRecibir >= 1) && (numeroRecibir <= 50)){
            dentroRango = true;
        }else{
            dentroRango = false;
        }
    }while(!dentroRango);

    //sumar numeros
    for(int i=0; i<=numeroRecibir; i++){
        sumaNumeros = sumaNumeros+i;
    }
    cout<<sumaNumeros;
    return 0;
}
