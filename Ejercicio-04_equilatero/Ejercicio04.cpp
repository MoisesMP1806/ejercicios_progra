/*
    Elabora un programa que calcule el perímetro de un triángulo equilátero. 
    El programa deberá pedir al usuario las entradas necesarias.
    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float ladoTriangulo;
    float perimetro;
    cout<<"Digita el perimetro de uno de los lados del triangulo: ";
    cin>>ladoTriangulo;
    perimetro = ladoTriangulo*3;
    cout<<"El perimetro del triangulo es"<<perimetro;

    
    return 0;
}
