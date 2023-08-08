#include <iostream>
using namespace std;

void seleccion(int arreglo[3], int n)
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

int interpolacion(int arr[], int n, int objetivo)
{
  int inicio = 0;
  int fin = n - 1;

  while (inicio <= fin && objetivo >= arr[inicio] && objetivo <= arr[fin])
  {
    // Fórmula de interpolación para calcular la posición estimada del elemento
    int posicion_estimada = inicio + ((double)(fin - inicio) / (arr[fin] - arr[inicio])) * (objetivo - arr[inicio]);

    if (arr[posicion_estimada] == objetivo)
      return posicion_estimada;

    if (arr[posicion_estimada] < objetivo)
      inicio = posicion_estimada + 1;
    else
      fin = posicion_estimada - 1;
  }

  return -1; // Si el elemento no se encuentra en el arreglo
}

int main(int argc, char const *argv[])
{
  const int cantidad = 10;
  int arr[cantidad];
  cout << "----- Ejercicio 1, Ordenamiento y repeticion -----" << endl;
  for (int i = 0; i < cantidad; i++)
  {
    cout << "Ingrese numero " << i + 1 << ": --> ";
    cin >> arr[i];
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  seleccion(arr, n);

  cout << "Numeros ordenados: " << endl;

  int num;
  for (int i = 0; i < 10; i++)
  {
    num = 0;
    for (int j = 0; j < 10; j++)
    {
      if (arr[i] == arr[i - 1])
      {
        break;
      }
      if (arr[i] == arr[j])
      {
        num++;
      }
    }
    if (num > 0){
      cout << "numero " << arr[i] << " se repite: " << num << endl;
    }
  }

  return 0;
}
