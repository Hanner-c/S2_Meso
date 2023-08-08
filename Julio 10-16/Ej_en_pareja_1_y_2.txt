#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int, int);
void centrar_texto(const char *texto, int y);
void simbolo();

using namespace std;

void insercion(int arr[], int n) {
	for (int i = 1; i < n; i++) {
	int key = arr[i];
	int j = i - 1;

	while(j >= 0 && arr[j] > key){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
	}
}

void gotoxy(int x, int y)
{
  HANDLE centro;
  COORD coordenadas;
  centro = GetStdHandle(STD_OUTPUT_HANDLE);
  coordenadas.X = x;
  coordenadas.Y = y;
  SetConsoleCursorPosition(centro, coordenadas);
}

int main(int argc, char *argv[]) {
	const int cantidad = 15;
	int arr[cantidad];
	int suma = 0;
	bool repetido = false;
	cout << "******** Reto 2, ejercicio en grupos ********" << endl;
	cout << "Ingrese numeros" << endl;
	
	for(int i = 0; i < cantidad; i++){
		cout << "Ingrese numero #" << i + 1 << ": ";
		cin >> arr[i];
		
		do{
			for(int x = 0; x < i; x++){
				if(arr[i] == arr[x]){
				cout << "numero ingresado repetido, ingrese otro: ";
				cin >> arr[i];
				repetido = true;
				}
				else{
					repetido = false;
				}
			}
		}while(repetido == true);
		
		for(int x = i+1; x < cantidad; x++){
			arr[x] = 0;
		}
		insercion(arr, i+1);
		
		for(int h = 0; h < cantidad; h++){
			cout << "  " << arr[suma];
			suma++;
			
			if(h == i){
				cout << endl;
				suma = 0;
				break;
			}
		}
	}
	return 0;
}
