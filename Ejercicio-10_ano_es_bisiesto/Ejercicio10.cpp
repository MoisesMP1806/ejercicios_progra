/*
    Elabora un programa o una función que reciba un número entero que 
    represente un año y devuelva verdadero si el año es bisiesto.
    MOISES MEDINA PORRAS
*/
#include<iostream>
using namespace std;

bool bisiesto(int anio){
    if((anio%100==0) && (anio&4==0) && (anio%400==0)){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int anio;
    cout<<"Digita el año a verificar si es bisiesto: ";
    cin>>anio;
    if(bisiesto(anio)){
        cout<<"El año es bisiesto";
    }else{
        cout<<"El año no es bisiesto";
    }
    return 0;
}
