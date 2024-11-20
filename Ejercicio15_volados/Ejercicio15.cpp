/*
     Elabora un programa que juegue volados con el usuario. El juego tendrá 3 rondas.
Al inicio de cada ronda, la computadora realiza una apuesta aleatoria entre $20 y $100. Después el usuario deberá realizar su apuesta también con un límite entre $20 y $100.
A continuación, el jugador deberá elegir AGUILA o SOL. El programa lanza el volado e imprime el resultado (AGUILA o SOL) el jugador gana si adivinó el resultado, en caso contrario gana el CPU.
El ganador se lleva la cantidad de dinero que haya apostado su rival y este restará de su bolsa el dinero que perdió. Tanto el jugador como el CPU empiezan con una bolsa de $500.

MOISES MEDINA PORRAS
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  

    int jugador_bolsa = 500, cpu_bolsa = 500;  
    int apuesta_jugador, apuesta_cpu;
    string eleccion_jugador, resultado_volado;
    int volado;

    for (int ronda = 1; ronda <= 3; ++ronda) {
        cout << "Ronda " << ronda << ":\n";
        
        apuesta_cpu = rand() % 81 + 20;

        do {
            cout << "Tu bolsa actual es: $" << jugador_bolsa << "\n";
            cout << "Apuesta entre $20 y $100: ";
            cin >> apuesta_jugador;
        } while (apuesta_jugador < 20 || apuesta_jugador > 100 || apuesta_jugador > jugador_bolsa);

        volado = rand() % 2;
        resultado_volado = (volado == 0) ? "SOL" : "AGUILA";

        do {
            cout << "Elige AGUILA o SOL: ";
            cin >> eleccion_jugador;
            for (auto & c: eleccion_jugador) c = toupper(c);
        } while (eleccion_jugador != "AGUILA" && eleccion_jugador != "SOL");

        cout << "La computadora apostó: $" << apuesta_cpu << endl;
        cout << "El volado salió: " << resultado_volado << endl;

        if ((eleccion_jugador == "AGUILA" && resultado_volado == "AGUILA") || 
            (eleccion_jugador == "SOL" && resultado_volado == "SOL")) {
            cout << "¡Ganaste la ronda!\n";
            jugador_bolsa += apuesta_cpu;
            cpu_bolsa -= apuesta_cpu;
        } else {
            cout << "Perdiste la ronda.\n";
            jugador_bolsa -= apuesta_jugador;
            cpu_bolsa += apuesta_jugador;
        }

        // Verificar si algún jugador se quedó sin dinero
        if (jugador_bolsa <= 0) {
            cout << "Te quedaste sin dinero. ¡El juego ha terminado!\n";
            break;
        } else if (cpu_bolsa <= 0) {
            cout << "La computadora se quedó sin dinero. ¡El juego ha terminado!\n";
            break;
        }

        cout << "Tu bolsa actual es: $" << jugador_bolsa << endl;
        cout << "La bolsa de la computadora es: $" << cpu_bolsa << endl;
        cout << "-----------------------------\n";
    }

    if (jugador_bolsa > cpu_bolsa) {
        cout << "¡Felicidades, ganaste el juego!\n";
    } else if (jugador_bolsa < cpu_bolsa) {
        cout << "La computadora ganó el juego.\n";
    } else {
        cout << "El juego terminó en empate.\n";
    }

    return 0;
}