#include <iostream>
using namespace std;

void seleccion(int arreglo[][2], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_idx = i;
    for (int a = i + 1; a < n; a++)
    {
      if (arreglo[a][0] < arreglo[min_idx][0])
      {
        min_idx = a;
      }
    }

    int temporal = arreglo[min_idx][0];
    int temporal2 = arreglo[min_idx][1];
    arreglo[min_idx][0] = arreglo[i][0];
    arreglo[min_idx][1] = arreglo[i][1];
    arreglo[i][0] = temporal;
    arreglo[i][1] = temporal2;
  }
}

int main()
{
  // Arreglo bidimensional de enteros
  int arr[10][2];
  cout << "*** Reto 4, ordenamiento bidimencional ***" << endl;
  cout << "Ingrese numeros" << endl;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese a la fila uno, un numero: ";
    cin >> arr[i][0];
    cout << "Ingrese a la fila dos, un numero: ";
    cin >> arr[i][1];
    cout << endl;
  }

  int filas = sizeof(arr) / sizeof(arr[0]);

  // Ordenar el arreglo bidimensional basado en la primera columna
  seleccion(arr, filas);

  // Mostrar el arreglo ordenado
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
