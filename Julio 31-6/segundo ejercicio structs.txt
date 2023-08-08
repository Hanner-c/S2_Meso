#include <iostream>
#include <string>

using namespace std;

struct Carro
{
    string marca;
    string propietario;
    int year;
    string color;
    string placa;
    string vin;
};

void crear_carro()
{
    Carro carro1;
    cout << "Ingrese los datos del carro: " << endl;
    cout << "Ingrese la marca : ";
    cin >> carro1.marca;

    cout << "Ingrese el nombre del propietario : ";
    cin >> carro1.propietario;

    cout << "Ingrese el a-o : ";
    cin >> carro1.year;

    cout << "Ingrese el color : ";
    cin >> carro1.color;

    cout << "Ingrese la placa : ";
    cin >> carro1.placa;

    cout << "Ingrese el vin : ";
    cin >> carro1.vin;
    cout << endl
         << "*********************************************************************************" << endl;

    cout << "Los datos de carros ingresados son:" << endl;
    cout << "*************************************************" << endl;
    cout << "Marca: " << carro1.marca << endl;

    cout << "Propietario: " << carro1.propietario << endl;

    cout << "A-o: " << carro1.year << endl;

    cout << "Color: " << carro1.color << endl;

    cout << "Placa: " << carro1.placa << endl;

    cout << "Vin: " << carro1.vin << endl;
}
void crear_carros(const int cantidad)
{
    Carro carros[cantidad];
    int selector, conteo = 0, id;
    bool encontrado;
    string ncarro, placaActual;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese los tdatos del carro: " << endl;
        cout << "Ingrese la marca " << i + 1 << ": ";
        cin >> carros[i].marca;

        cout << "Ingrese el nombre del propietario " << i + 1 << ": ";
        cin >> carros[i].propietario;

        cout << "Ingrese el a-o " << i + 1 << ": ";
        cin >> carros[i].year;

        cout << "Ingrese el color " << i + 1 << ": ";
        cin >> carros[i].color;

        cout << "Ingrese la placa " << i + 1 << ": ";
        cin >> carros[i].placa;

        cout << "Ingrese el vin " << i + 1 << ": ";
        cin >> carros[i].vin;
        cout << endl
             << "*********************************************************************************" << endl;
    }
    cout << "----------- Sub menu -----------" << endl;
    cout << "Seleccione la opcion que desea ejecutar: " << endl;
    cout << "   1. Mostrar los datos en el orden en el que fueron ingresados" << endl;
    cout << "   2. Mostrar de forma inversa los datos" << endl;
    cout << "   3. Busqueda pos placa" << endl;
    cout << "ingrese num de la opcion --> ";
    cin >> selector;

    switch (selector)
    {
    case 1:
        cout << "Los datos de carros ingresados son:" << endl;
        for (int i = 0; i < cantidad; i++)
        {
            cout << "*************************************************" << endl;
            cout << "Marca " << i + 1 << ": " << carros[i].marca << endl;

            cout << "Propietario " << i + 1 << ": " << carros[i].propietario << endl;

            cout << "A-o " << i + 1 << ": " << carros[i].year << endl;

            cout << "Color " << i + 1 << ": " << carros[i].color << endl;

            cout << "Placa " << i + 1 << ": " << carros[i].placa << endl;

            cout << "Vin " << i + 1 << ": " << carros[i].vin << endl;
        }
        break;
    case 2:
        cout << "Los datos de carros ingresados son:" << endl;
        for (int i = cantidad - 1; i >= 0; i--)
        {
            cout << "*************************************************" << endl;
            cout << "Vin " << i + 1 << ": " << carros[i].vin << endl;
            cout << "Placa " << i + 1 << ": " << carros[i].placa << endl;
            cout << "Color " << i + 1 << ": " << carros[i].color << endl;
            cout << "A-o " << i + 1 << ": " << carros[i].year << endl;
            cout << "Propietario " << i + 1 << ": " << carros[i].propietario << endl;
            cout << "Marca " << i + 1 << ": " << carros[i].marca << endl;
        }
        break;
    case 3:
        cout << "*************************************************" << endl;
        cout << "Ingrese la placa a buscar: ";
        cin >> ncarro;
        encontrado = false;
        for (int i = 0; i < cantidad; i++)
        {
            placaActual = carros[i].placa;
            if (placaActual == ncarro)
            {
                encontrado = true;
                id = i;
            }
        }
        if (encontrado == false)
        {
            cout << "No encontrado" << endl;
        }
        else
        {
            cout << endl
                 << "Placa: " << ncarro << " demas datos: " << endl
                 << endl;
            cout << "Marca : " << carros[id].marca << endl;
            cout << "Propietario : " << carros[id].propietario << endl;
            cout << "A-o : " << carros[id].year << endl;
            cout << "Color : " << carros[id].color << endl;
            cout << "Vin : " << carros[id].vin << endl;
        }
        break;
    }
}
int main()
{
    int cantidad;
    int selector, conteo = 0;
    bool encontrado;
    string personaB, nombreActual;

    cout << "----------- Ejercicio 2 1/08 - Carro personalizado -----------" << endl;
    cout << "   1. Ingresar datos de un carro" << endl;
    cout << "   2. Ingresar n cantidad de carros" << endl;
    cout << "Seleccione la opcion que desea ejecutar: " << endl;
    cin >> selector;

    switch (selector)
    {
    case 1:
        crear_carro();
        break;
    case 2:
        cout << "Cuantos carros ingresara al sistema: ";
        cin >> cantidad;
        crear_carros(cantidad);
        break;
    }

    return 0;
}
