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

int main(int argc, char const *argv[])
{
  int n_factorial[3];
  cout << "----- Ejercicio 2, Factoriales -----" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese numero " << i + 1 << ": --> ";
    cin >> n_factorial[i];
  }
  int n = sizeof(n_factorial) / sizeof(n_factorial[0]);
  seleccion(n_factorial, n);

  cout << "Numeros ordenados: " << n_factorial[0] << ", " << n_factorial[1] << ", " << n_factorial[2] << endl;

  int multiplicacion = 1;

  cout << n_factorial[0] << "! = ";
  for (int i = n_factorial[0]; i > 0; i--)
  {
    multiplicacion = multiplicacion * i;
    if (i > 1)
    {
      cout << i << " * ";
    }

    else
    {
      cout << i << " = ";
    }
  }
  cout << multiplicacion << endl;

  multiplicacion = 1;

  cout << n_factorial[1] << "! = ";
  for (int i = n_factorial[1]; i > 0; i--)
  {
    multiplicacion = multiplicacion * i;
    if (i > 1)
    {
      cout << i << " * ";
    }

    else
    {
      cout << i << " = ";
    }
  }
  cout << multiplicacion << endl;

  multiplicacion = 1;

  cout << n_factorial[2] << "! = ";
  for (int i = n_factorial[2]; i > 0; i--)
  {
    multiplicacion = multiplicacion * i;
    if (i > 1)
    {
      cout << i << " * ";
    }

    else
    {
      cout << i << " = ";
    }
  }
  cout << multiplicacion << endl;
  return 0;
}
