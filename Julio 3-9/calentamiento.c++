#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int numero_de_opcion = 0, tecla_de_salida, tiempo_segundos = 0, tiempo_minutos = 0, numero_de_letras;
  bool salidarReloj = false;
  char letraMayuscula;
  string letraDeletreo;
  system("cls");
  cout << "**** Primer Ejercicio ****" << endl;
  cout << "1. Reloj" << endl;
  cout << "2. Comvertidor de mayusculas a minusculas" << endl;
  cout << "3. Deletreador de palabras" << endl;
  cout << "4. Calculadora de sumas, de numeros decimales" << endl;
  cin >> numero_de_opcion;

  // while (tecla_de_salida == 32)
  //{
  switch (numero_de_opcion)
  {
  case 1:
    while (salidarReloj == false)
    {
      system("cls");
      cout << "************ RELOJ ************" << endl;
      cout << "**       Hora: " << tiempo_minutos << " : " << tiempo_segundos << "        **" << endl;
      tiempo_segundos++;
      Sleep(1000);

      if (tiempo_segundos == 60)
      {
        tiempo_segundos = 0;
        tiempo_minutos++;
      }
      if (tiempo_minutos == 60)
      {
        salidarReloj = false;
      }
    }
    break;

  case 2:
    system("cls");
    cout << "************ Comvertidor de mayuscula a minuscula ************" << endl;
    cout << "Ingrese una letra en mayuscula: ";
    cin >> letraMayuscula;
    letraMayuscula = letraMayuscula + 32;
    cout << endl
         << endl
         << "El resultado en minuscula es: " << letraMayuscula;
    break;

  case 3:
    system("cls");
    cout << "************ Deletreador de palabras ************" << endl;
    cout << "Ingresa la palabra: --> ";
    cin >> letraDeletreo;
    numero_de_letras = letraDeletreo.length();
    for (int i = 0; i < numero_de_letras; i++)
    {
      cout << i + 1 << " Letra: " << letraDeletreo[i] << endl;
    }
    break;

  case 4:
  {
    system("cls");
    cout << "************ Calculadora de sumas, con numeros decimales ************" << endl;
    cout << "Ingresa la primera cantida: --> ";
    float cantidad_uno;
    cin >> cantidad_uno;
    cout << "Ingresa la segunda cantida: --> ";
    float cantidad_dos;
    cin >> cantidad_dos;
    cout << "Ingresa la tercera cantida: --> ";
    float cantidad_tres;
    cin >> cantidad_tres;
    cout << "Resultado = " << cantidad_uno + cantidad_dos + cantidad_tres << endl;
  }
  break;

  default:
    cout << "Error opcion incorrecta" << endl;
    break;
  }
  //}

  return 0;
}