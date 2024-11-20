/*
    Elabora un programa que reciba un número e imprima la tabla de multiplicar de ese número del 2 al 10.
    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeroTabla;
    
    cout<<"Digita el numero a mostrar su tabla de multiplicar: ";
    cin>>numeroTabla;

    for(int i = 2; i<=10; i++){
        cout<<numeroTabla+" x "+i<<"= "+numeroTabla*i;
    }
    return 0;
}
