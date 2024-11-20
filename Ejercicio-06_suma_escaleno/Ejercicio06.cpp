/*
    Elabora un programa que calcule el perímetro de un triángulo escaleno. 
    El programa pedirá al usuario las entradas necesarias.
    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float ladoA;
    float ladoB;
    float ladoC;
    float perimetro;

    cout<<"Ingresa la longitud del lado A, B, C separados por un espacio: ";
    cin>>ladoA>>ladoB>>ladoC;
    perimetro = ladoA + ladoB +ladoC;
    cout<<"El perimetro del triangulo escaleno es: "<<perimetro;

    return 0;
}
