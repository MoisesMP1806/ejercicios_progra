/*
    Elabora un programa que reciba 
    como entrada un monto en dólares (USD) 
    y devuelva la cantidad equivalente en pesos mexicanos (MXN)

    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float numeroDolares;
    float precioDolar=20.3f;
    float pesosConvertidos;

    cout << "Escribe los dolares a converir a pesos: ";
    cin >> numeroDolares;
    pesosConvertidos = precioDolar * numeroDolares;
    cout<<"La conversion de dolar(USD) a pesos(MX) es "<<pesosConvertidos;
    return 0;
}
