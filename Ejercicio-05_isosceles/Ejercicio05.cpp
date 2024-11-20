/*
    Elabora un programa que calcule el perímetro de un triángulo isósceles. 
    El programa pedirá al usuario las entradas necesarias.
    MOISES MEDINA PORRAS
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float baseTriangulo;
    float ladoTriangulo;
    float perimetroTriangulo;

    cout<<"Digita longitud de la base del triangulo: ";
    cin>>baseTriangulo;

    cout<<"Digita la longitud de uno de los lados: ";
    cin>>ladoTriangulo;

    perimetroTriangulo = (2*ladoTriangulo) + baseTriangulo;
    cout<<"El perimetro del triangulo es: "<<perimetroTriangulo;
    
    return 0;
}
