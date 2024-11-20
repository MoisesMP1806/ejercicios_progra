/*
    labora un programa o una función que reciba un día, mes y año y devuelva verdadero si la fecha es real y falso si la fecha es irreal. 
    Un ejemplo de fecha irreal es 30 de febrero o 31 de abril o 29 de febrero de 2021.
    MOISES MEDINA PORRAS
*/

#include<iostream>
#include<string>
using namespace std;

bool esBisiesto(int anio);
bool diaValido(int dia, int mes, int anio);
bool mesValido(string mes);
bool anioValido(int anio);
int obtenerNumeroMes(string mes);

int main(int argc, char const *argv[]) {
    string meses[] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    int dia, anio;
    string mes;
    bool fechaValida;

    do {
        cout << "Digite el día, mes y año en ese orden separados por un espacio: ";
        cin >> dia >> mes >> anio;

        if (diaValido(dia, obtenerNumeroMes(mes), anio) && mesValido(mes) && anioValido(anio)) {
            fechaValida = true;
            cout << "La fecha es válida." << endl;
        } else {
            fechaValida = false;
            cout << "La fecha es inválida." << endl;
        }
    } while (!fechaValida);

    return 0;
}

bool esBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return true;
    }
    return false;
}

bool diaValido(int dia, int mes, int anio) {
    if (mes < 1 || mes > 12) {
        return false;
    }

    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && esBisiesto(anio)) {
        diasPorMes[1] = 29;
    }

    if (dia >= 1 && dia <= diasPorMes[mes - 1]) {
        return true;
    }

    return false;
}

bool mesValido(string mes) {
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
    for (int i = 0; i < 12; i++) {
        if (meses[i] == mes) {
            return true;  
        }
    }

    return false; 
}

int obtenerNumeroMes(string mes) {
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
    for (int i = 0; i < 12; i++) {
        if (meses[i] == mes) {
            return i + 1;  
        }
    }

    return -1;  
}

bool anioValido(int anio) {
    if (anio > 0) {
        return true;
    }
    return false;
}