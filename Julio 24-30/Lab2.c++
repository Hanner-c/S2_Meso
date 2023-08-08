#include <iostream>
using namespace std;

void seleccion(int arreglo[5], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_idx = i;
    for (int a = i + 1; a < n; a++)
    {
      if (arreglo[a] < arreglo[min_idx])
      {
        min_idx = a;
      }
    }

    int temporal = arreglo[min_idx];
    arreglo[min_idx] = arreglo[i];
    arreglo[i] = temporal;
  }
}

int main()
{
  cout << "********************** Ejercicio 2, LABORATORIO **********************" << endl;
  const int cantidad = 5;
  int numeros[5][3];

  for (int x = 0; x < cantidad; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      cout << "ingrese el numero NO " << x << ", de la columna " << y << " --> ";
      cin >> numeros[x][y];
    }
  }
  cout << "Areglo queda asi: " << endl;
  for (int x = 0; x < cantidad; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      cout << numeros[x][y] << "  ";
    }
    cout << endl;
  }
  int num[5];
  int q = 0;
  for (int x = 0; x < 5; x++)
  {
    num[x] = 1;
    for (int y = 0; y < 3; y++)
    {
      num[x] = num[x] * numeros[x][y];
    }
    cout << endl;
  }
  int n = sizeof(num) / sizeof(num[0]);
  seleccion(num, n);
  cout << "Resultados de multiplicacion ordenados: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << num[i] << endl;
  }

  return 0;
}