/*
    Elabora un programa que imprima los números pares del 0 al 100.
    MOISES MEDINA PORRAS
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        if(i % 2 == 0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}
