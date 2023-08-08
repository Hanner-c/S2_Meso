#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y)
{
  HANDLE centro;
  COORD coordenadas;
  centro = GetStdHandle(STD_OUTPUT_HANDLE);
  coordenadas.X = x;
  coordenadas.Y = y;
  SetConsoleCursorPosition(centro, coordenadas);
}

int main(int argc, char const *argv[])
{
  int key, num = 0, bits[10], cont = 0, h = 0; // Lo unico que necesito para agrandar el tope es cambiar el numero del array
  bool seguir = true, estado = false;
  system("cls");
  cout << "****************** Contador binario - Estructuras logicas *****************" << endl
       << endl;
  cout << "Presiona la flecha hacia arriba para aumentar el conteo." << endl;
  cout << "El contero va por:                           Conteo de vueltas: " << endl;
  gotoxy(25, 4);
  cout << "0";
  gotoxy(70, 4);
  cout << "0";

  for (int i = 0; i < 10; i++)
  {
    bits[i] = 0;
  }

  key = _getch();
  while (seguir == true)
  {
    key = _getch();
    if (key == 224)
    {
      key = _getch();
      switch (key)
      {
      case 72:
        // indico el bucle de evaluacion
        bits[num] = !bits[num];
        while (bits[num] == 0)
        {
          num++;
          bits[num] = !bits[num];
        }
        if (bits[5] == 1)
        {
          for (int i = 0; i < 6; i++)
          {
            bits[i] = 0;
          }
          cont++;
          gotoxy(70, 4);
          cout << cont;
          gotoxy(25, 4);
          cout << "0      ";
        }
        for (int i = 10; i >= 0; i--)
        {
          if (bits[i] == 1)
          {
            h = i;
            gotoxy(25, 4);
            for (int x = h; x >= 0; x--)
            {
              cout << bits[x];
            }
            break;
          }
        }
        num = 0;
      }
    }
    else if (key == 27)
    {
      seguir = false;
    }
  }

  return 0;
}
