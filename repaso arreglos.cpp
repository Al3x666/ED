#include <iostream>
using namespace std;
int main()
{
    // Declaración y inicialización de un arreglo de enteros con 5 elementos
    int numeros[5] = { 10, 20, 30, 40, 50 };

    // Mostrar los elementos del arreglo
    cout << "Elementos en el arreglo: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Modificar un elemento del arreglo
    numeros[2] = 35;

    // Mostrar el arreglo actualizado
    cout << "Arreglo después de modificar el tercer elemento: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Calcular la suma de los elementos en el arreglo
    int suma = 0;
    for (int i = 0; i < 5; i++) 
    {
        suma += numeros[i];
    }
    cout << "La suma de los elementos es: " << suma << endl;
}

