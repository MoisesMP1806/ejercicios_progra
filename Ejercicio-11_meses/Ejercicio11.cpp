/*
    Problema: Elabora un programa que reciba un número entero entre 0 y 11, 
    debe devolver el nombre de mes correspondiente. Toma en cuenta que 0 = Enero y 11 = Diciembre.

    MOISES MEDINA PORRAS
*/

#include <iostream>
#include <unordered_map>
#include <string>
#include <map>
using namespace std;


int main(int argc, char const *argv[])
{
    int numeroMes;
    bool numeroValido;
    map<int, string> diccionarioMes;

    diccionarioMes[0] = "Enero";
    diccionarioMes[1] = "Febrero";
    diccionarioMes[2] = "Marzo";
    diccionarioMes[3] = "Abril";
    diccionarioMes[4] = "Mayo";
    diccionarioMes[5] = "Junio";
    diccionarioMes[6] = "Julio";
    diccionarioMes[7] = "Agosto";
    diccionarioMes[8] = "Septiembre";
    diccionarioMes[9] = "Octube";
    diccionarioMes[10] = "Noviembre";
    diccionarioMes[11] = "Diciembre";

    do{
        cout<<"Digita un numero entre el 0 y el 11";
        cin>>numeroMes;

        if(numeroMes <= 11){
            numeroValido = true;
            cout<<diccionarioMes[numeroMes];
        }else{
            numeroValido = false;
        }
    }while(!numeroValido);

    return 0;
}
