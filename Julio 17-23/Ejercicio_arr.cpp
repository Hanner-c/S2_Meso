#include <iostream>
using namespace std;

// si cambio el tama;o del arreglo cambiar tambien linea 5 las mismas dimenciones y la linea 16
void ordenarArregloBidimensional(int arreglo[][2], int filas) {
	for (int i = 0; i < filas - 1; i++) {
		int minimoIndice = i;
		
		for (int j = i + 1; j < filas; j++) {
			if (arreglo[j][0] > arreglo[minimoIndice][0]) {
				minimoIndice = j;
			}
		}
		
		if (minimoIndice != i) {
			for (int k = 0; k < 2; k++) {
				int temp = arreglo[i][k];
				arreglo[i][k] = arreglo[minimoIndice][k];
				arreglo[minimoIndice][k] = temp;
			}
		}
	}
}

int main() {
	// Arreglo bidimensional de enteros
	int arregloBidimensional[6][2];
	cout << "*** Reto 1, ordenamiento bidimencional ***" << endl;
	cout << "Ingrese numeros" << endl;
	
	for(int i = 0; i < 6; i++){
		cout << "Ingrese a la fila uno, un numero: ";
		cin >> arregloBidimensional[i][0];
		cout << "Ingrese a la fila dos, un numero: ";
		cin >> arregloBidimensional[i][1];
		cout << endl;
	}
	
	
	int filas = sizeof(arregloBidimensional) / sizeof(arregloBidimensional[0]);
	
	// Ordenar el arreglo bidimensional basado en la primera columna
	ordenarArregloBidimensional(arregloBidimensional, filas);
	
	// Mostrar el arreglo ordenado
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arregloBidimensional[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}  