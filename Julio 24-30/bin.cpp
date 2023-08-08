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
  int key, num = 0, bits[10], h = 0;
  
  bool seguir = true;
  system("cls");
  cout << "****************** Contador binario - Estructuras logicas *****************" << endl
       << endl;
  cout << "Presiona la flecha hacia arriba para aumentar el conteo." << endl;
  cout << "El contero va por: " << endl;
  gotoxy(25, 4);
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
        
        cout << "fin" << endl;
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

