#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void random(int cantidadNumeros, int numeros[]){
  srand(static_cast<unsigned>(std::time(0)));
    
  for (int i = 0; i < cantidadNumeros; i++) {
      numeros[i] = std::rand() % 90 + 0; // Genera un número aleatorio entre 10 y 99 (dos dígitos)
  }

  int numeroMasGrande = *max_element(numeros, numeros + cantidadNumeros);
  int numeroMasPequeno = *min_element(numeros, numeros + cantidadNumeros);

  cout << "Los numeros generados son: ";
  for (int i = 0; i < cantidadNumeros; i++) {
    std::cout << numeros[i] << " ";
  }
}

void seleccion(int arreglo[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int a = i + 1; a < n; a++) {
				if (arreglo[a] < arreglo[min_idx]) {
					min_idx = a;
				}
		}

		int temporal = arreglo[min_idx];
		arreglo[min_idx] = arreglo[i];
		arreglo[i] = temporal;
	}
}

int main() {
  cout << "********************** Ejercicio 3, numeros aleatorios y oden **********************" << endl;
  int numeros[15];
  
  random(15, numeros);
  
  int n = sizeof(numeros)/sizeof(numeros[0]);
  seleccion(numeros, n);
  cout << endl << endl;
  cout << "Los numeros ya ordenados en lista: ";
  for (int i = 0; i < 15; i++) {
    std::cout << numeros[i] << " ";
  }
  cout <<endl;
  cout << "El numero mas grande es: " << numeros[14] << endl;
  cout << "El numero mas pequeno es: " << numeros[0] << endl;
}
