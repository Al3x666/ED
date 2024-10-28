#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura Libro
struct Libro 
{
    string titulo;
    string autor;  //variables a declarar en tu struct
    int anioPublicacion;
};

int main() 
{
    // Crear un vector de libros
    vector<Libro> biblioteca;

    // Agregar libros al vector
    biblioteca.push_back({ "Cien años de soledad", "Gabriel Garcia Marquez", 1967 });
    biblioteca.push_back({ "1984", "George Orwell", 1949 }); 
    biblioteca.push_back({ "Orgullo y prejuicio", "Jane Austen", 1813 });  //empujar las variables
    biblioteca.push_back({ "El gran Gatsby", "F. Scott Fitzgerald", 1925 });

    // Mostrar la información de todos los libros en el vector
    cout << "Lista de libros en la biblioteca:" << endl;
    for (const auto& libro : biblioteca) 
    {
        cout << "Título: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Año de publicación: " << libro.anioPublicacion << endl;
        cout << "-----------------------------" << endl;
    }

    // Contar los libros publicados antes de 1950
    int librosAntiguos = 0;
    for (const auto& libro : biblioteca) 
    {
        if (libro.anioPublicacion < 1950) 
        {
            librosAntiguos++;
        }
    }
    cout << "Número de libros publicados antes de 1950: " << librosAntiguos << endl;

}
