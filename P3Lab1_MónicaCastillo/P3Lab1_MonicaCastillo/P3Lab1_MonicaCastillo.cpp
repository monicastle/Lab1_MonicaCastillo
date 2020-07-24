// P3Lab1_MonicaCastillo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char respuesta = 's';
	while (respuesta == 's') {
		int opcion;
		cout << "1. Ejercicio #1" << endl;
		cout << "2. Ejercicio #2" << endl;
		cout << "3. Salida" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			int x;
			cout << "Ingrese el valor de x: ";
			cin >> x;
			double denominador, resultado;
			// Calcula el resultado de la funcion
			denominador = 1 + exp(-x);
			resultado = 1 / denominador;
			cout << "f(" << x << ") = " << resultado << endl;
			break; }
		case 2: {
			int numero;
			cout << "Ingrese un numero: ";
			cin >> numero;
			int resultado = 0;
			// Calcula el resultado de la sumatoria
			for (int i = 0; i <= numero; i++) {
				resultado += ((2 * i) - 1) * ((2 * i) + 1);
			} // Fin For
			cout << "S(" << numero << ") = " << resultado << endl;
			break; }
		case 3: {
			// Salida del programa
			respuesta = 'n';
			break; }
		default: {
			cout << "¡Opcion no valida!" << endl; }
		} // Fin Switch
	} // Fin While Respuesta
} // Fin Main
