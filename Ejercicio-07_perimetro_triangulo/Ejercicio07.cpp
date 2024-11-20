/*
    Elabora programa que calcule el perímetro de un triángulo. El programa preguntará al usuario el tipo de triángulo 
    (equilátero, isósceles o escaleno) y le pedirá las entradas necesarias para realizar el cálculo necesario.
    MOISES MEDINA PORRAS
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string tipoTriangulo;
    float perimetroTriangulo;
    cout<<"Digita el tipo de triangulo: ";
    cin>>tipoTriangulo;

    
    if(tipoTriangulo == "equilatero"){
        float ladoTrianguloEq;
        float perimetroEquilatero;

        cout<<"Digita el lado del triangulo equilatero: ";
        cin>>ladoTrianguloEq;

        perimetroEquilatero = ladoTrianguloEq*3;
        cout<<"El perimetro del triangulo es: "<<perimetroEquilatero;


    }else if(tipoTriangulo == "isosceles"){
        float ladoTrianguloA;
        float ladoTrianugloB;
        float perimetroIsosceles;

        cout<<"Digita el lado del igual del triangulo isosceles: ";
        cin>>ladoTrianguloA;
        cout<<"Digita el otro lado del triangulo isosceles: ";
        cin>>ladoTrianugloB;

        perimetroIsosceles = (2*ladoTrianguloA) + ladoTrianugloB;
        cout<<"El perimetro del trianglo isosceles es: "<<perimetroIsosceles;

    }else if(tipoTriangulo == "escaleno"){ 
        float ladoTrianguloA;
        float ladoTrianguloB;
        float ladoTrianguloC;
        float perimetroTrianguloEscaleno;

        cout<<"Digita el lado A del triangulo escaleno: ";
        cin>>ladoTrianguloA;
        cout<<"Digita el lado B del triangulo escaleno: ";
        cin>>ladoTrianguloB;
        cout<<"Digita el lado C del triangulo escaleno: ";
        cin>>ladoTrianguloC;

        perimetroTrianguloEscaleno = ladoTrianguloA + ladoTrianguloB + ladoTrianguloC;
        cout<<"El perimetro del triangulo escaleno es: "<<perimetroTriangulo;

    }else{
        cout<<"no has digitado un triangulo correocto";
    }
    return 0;
}
