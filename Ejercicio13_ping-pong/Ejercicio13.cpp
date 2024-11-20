/*
    Escribe un programa que imprima los números del 1 al 100, pero aplicando las siguientes reglas.
    Regla 1: Cuando el número sea divisible entre 3, en vez del número debe escribir "ping"
    Regla 2: Cuando el número sea divisible entre 5, en vez del número debe escribir "pong"
    Regla 3: Cuando el número sea divisible entre 3 y también divisible entre 5, en vez del número debe escribir "ping-pong"

    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    for(int i=1; i<=100; i++){
        if(i%3==0 && i%5==0){
            cout<<i<<": ping-pong"<<endl;
        }else if(i%3==0){
            cout<<i<<": ping"<<endl;
        }else if(i%5==0){
            cout<<i<<": pong"<<endl;
        }
    }
    return 0;
}
