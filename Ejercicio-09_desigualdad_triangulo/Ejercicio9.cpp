/*
    teorema de la desigualdad de un triángulo. Si tenemos tres segmentos de cualquier longitud, no siempre se puede construir un triángulo con ellos. 
    Elabora un programa que reciba la longitud de 3 segmentos y determine si con ellos es posible formar un triángulo.
    MOISES MEDINA PORRAS
*/

#include<iostream>
using namespace std;

bool verificar_triangulo(float a, float b, float c) {  
    return (a + b) > c && (a + c) > b && (b + c) > a;
}

int main(int argc, char const *argv[])
{
    float longitudA, longitudB, longitudC;
    cout << "Digita la longitud A, B, C separada por un espacio: ";
    cin >> longitudA >> longitudB >> longitudC;

    if (verificar_triangulo(longitudA, longitudB, longitudC)) {
        cout << "Los lados pueden formar un triangulo";
    } else {
        cout << "Los lados no pueden formar un triangulo";
    }

    return 0;
}