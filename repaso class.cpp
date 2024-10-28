#include <iostream>
using namespace std;

class Persona 
{
private:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string n, int e) : nombre(n), edad(e) {}

    // Método para establecer el nombre
    void setNombre(string n) 
    {
        nombre = n;
    }

    // Método para obtener el nombre
    string getNombre() const 
    {
        return nombre;
    }

    // Método para establecer la edad
    void setEdad(int e) 
    {
        if (e >= 0) // validación para evitar edad negativa
        {  
            edad = e;
        }
    }

    // Método para obtener la edad
    int getEdad() const 
    {
        return edad;
    }

    // Método para mostrar los datos
    void mostrarInformacion() const 
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main() 
{
    // Crear un objeto de la clase Persona
    Persona persona1("Juan", 25);

    // Mostrar la información inicial
    persona1.mostrarInformacion();

    // Cambiar el nombre y la edad
    persona1.setNombre("Maria");
    persona1.setEdad(30);

    // Mostrar la información actualizada
    persona1.mostrarInformacion();

}
