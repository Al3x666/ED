#include <vector>
#include <iostream>
using namespace std;
int main()
{
    // Declaración de un vector de enteros
    vector<int> numeros;

    // Agregar elementos al vector
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);

    // Mostrar los elementos del vector
    cout << "Elementos en el vector: ";
    for (int i = 0; i < numeros.size(); i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Modificar un elemento del vector
    numeros[1] = 25;

    // Mostrar el vector actualizado
    cout << "Vector después de modificar el segundo elemento: ";
    for (int i = 0; i < numeros.size(); i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Eliminar el último elemento del vector
    numeros.pop_back();

    // Mostrar el vector después de eliminar el último elemento
    cout << "Vector después de eliminar el último elemento: ";
    for (int i = 0; i < numeros.size(); i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Verificar si el vector está vacío
    if (numeros.empty()) 
    {
        cout << "El vector está vacío." << endl;
    }
    else 
    {
        cout << "El vector no está vacío." << endl;
    }

    // Obtener el tamaño del vector
    cout << "El tamaño del vector es: " << numeros.size() << endl;

}
