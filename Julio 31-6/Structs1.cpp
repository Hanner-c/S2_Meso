#include <iostream>
#include <string>

using namespace std;

// Definici�n de la estructura Perro
struct Alumno
{
    string nombre;
    short edad;
    string tez;
    string genero;
    float altura;
};

int main()
{
    const int cantidad = 5;
    int selector;
    Alumno personas[cantidad];
    string personaB;

    // Llenar el arreglo de perros mediante cin
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el nombre persona " << i + 1 << ": ";
        cin >> personas[i].nombre;

        cout << "Ingrese la edad persona " << i + 1 << ": ";
        cin >> personas[i].edad;

        cout << "Ingrese el color de piel de persona " << i + 1 << ": ";
        cin >> personas[i].tez;

        cout << "Ingrese el genero de la persona " << i + 1 << ": ";
        cin >> personas[i].genero;

        cout << "Ingrese la artura de la persona " << i + 1 << ": ";
        cin >> personas[i].altura;
        cout << endl
             << "*********************************************************************************" << endl;
    }

    cout << "----------- Ejercicio 1 31/7 - Aula de la Meso -----------" << endl;
    cout << "Seleccione la opcion que desea ejecutar: " << endl;
    cout << "   1. Mostrar solo nombres" << endl;
    cout << "   2. Mostrar nombres y edades" << endl;
    cout << "   3. Mostrar de forma inversa los nombres de los registrados" << endl;
    cout << "   4. Mostrar el nombre de una persona que desea buscar" << endl;
    cout << "ingrese num de la opcion --> ";
    cin >> selector;

    switch (selector)
    {
    case 1:
        cout << "Los nombres ingresados son:" << endl;
        for (int i = 0; i < cantidad; i++)
        {
            cout << i + 1 << ". --> " << personas[i].nombre << endl;
        }
        break;
    case 2:
        cout << "Los nombres y edades de los alumnos son:" << endl;
        for (int i = 0; i < cantidad; i++)
        {
            cout << i + 1 << ". --> " << personas[i].nombre << " - " << personas[i].edad << " Anos" << endl;
        }
        break;
    case 3:
        cout << "Los nombres ingresados del ultimo al primero son:" << endl;
        for (int i = cantidad - 1; i >= 0; i--)
        {
            cout << i + 1 << ". --> " << personas[i].nombre << endl;
        }
        break;
    case 4:

        break;
    }
    cout << "Ingrese el nombre a buscar: ";
    cin >> personaB;
    int indice = -1;
    for (int i = 0; i < sizeof(personas->nombre) / sizeof(personas->nombre[0]); i++)
    {
        string nombreActual = personas[i]->nombre;
        if (nombreActual == busqueda)
        {
            indice = i;
            break;
        }
    }
    if (indice == -1)
    {
        std::cout << "No encontrado\n";
    }
    else
    {
        std::cout << "Encontrado en el indice " << indice << std::endl;
    }

    return 0;
}
