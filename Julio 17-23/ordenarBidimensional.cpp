#include <iostream>

using namespace std;

void ordenarArregloBidimensional(int arreglo[][3], int filas) {
	for (int i = 0; i < filas - 1; i++) {
		int minimoIndice = i;
		
		for (int j = i + 1; j < filas; j++) {
			if (arreglo[j][0] > arreglo[minimoIndice][0]) {
				minimoIndice = j;
			}
		}
		
		if (minimoIndice != i) {
			for (int k = 0; k < 3; k++) {
				int temp = arreglo[i][k];
				arreglo[i][k] = arreglo[minimoIndice][k];
				arreglo[minimoIndice][k] = temp;
			}
		}
	}
}

int main() {
	// Arreglo bidimensional de enteros
	int arregloBidimensional[][3] = {
		{4, 2, 6},
		{1, 5, 3},
		{7, 9, 8},
		{3, 2, 6},
		{8, 5, 3},
		{0, 9, 8}
	};
	
	int filas = sizeof(arregloBidimensional) / sizeof(arregloBidimensional[0]);
	
	// Ordenar el arreglo bidimensional basado en la primera columna
	ordenarArregloBidimensional(arregloBidimensional, filas);
	
	// Mostrar el arreglo ordenado
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arregloBidimensional[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
