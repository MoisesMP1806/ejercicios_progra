/*
    Elabora un programa en el cual el usuario debe adivinar un número entre 1 y 100. 

    El número es generado aleatoriamente por el programa. El programa solo le dará 5 intentos al usuario para adivinar. 
    Al final de los 5 intentos, el programa deberá mostrar el mensaje "PERDISTE" y mostrará cuál era el número correcto.
    Si el usuario adivina en alguno de los 5 intentos, el programa debe mostrar el mensaje "GANASTE" y mostrará cuál es el número.
    MOISES MEDINA PORRAS
*/
#include<iostream>
using namespace std;
#include <cstdlib>  
#include <ctime> 
int random(int desde, int hasta){
    int numeroAleatorio;
    return numeroAleatorio = rand() % hasta + desde;
}
int main(int argc, char const *argv[])
{
    srand(time(0));
    int numeroAleatorio = random(1,100);
    int numeroDigitado=0;
    for(int i=0; i<5; i++){
        cout<<"digita un numero para adivinarlo: ";
        cin>>numeroDigitado;
        if(numeroDigitado == numeroAleatorio){
            cout<<"GANASTE"<<endl<<"EL NUMERO ALEATORIO ES: "<<numeroAleatorio;
            break;
        }else{
            cout<<"El numero no es el correcto intentalo otra vez."<<endl;
        }
    }
    return 0;
}