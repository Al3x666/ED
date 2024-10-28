#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definición de la estructura Producto
struct Producto 
{
    string nombre;
    float precio;
    int stock;
};

// Definición de la clase Tienda
class Tienda 
{
private:
    vector<Producto> productos; // Vector para almacenar productos

public:
    // Método para agregar un producto
    void agregarProducto(const string& nombre, float precio, int stock) 
    {
        productos.push_back({ nombre, precio, stock });
    }

    // Método para mostrar todos los productos
    void mostrarProductos() const 
    {
        cout << "Productos disponibles en la tienda:" << endl;
        for (const auto& producto : productos) 
        {
            cout << "Nombre: " << producto.nombre << ", Precio: $" << producto.precio << ", Stock: " << producto.stock << endl;
        }
    }

    // Método para realizar una venta de un producto específico
    void venderProducto(const string& nombre, int cantidad, int ventas[]) 
    {
        for (auto& producto : productos) 
        {
            if (producto.nombre == nombre) 
            {
                if (producto.stock >= cantidad) 
                {
                    producto.stock -= cantidad;  // Actualizar stock
                    ventas[&producto - &productos[0]] += cantidad;  // Registrar venta en el arreglo
                    cout << "Venta realizada: " << cantidad << " unidades de " << producto.nombre << endl;
                }
                else 
                {
                    cout << "Stock insuficiente para " << producto.nombre << endl;
                }
                return;
            }
        }
        cout << "Producto no encontrado." << endl;
    }

    // Método para mostrar las ventas de cada producto
    void mostrarVentas(const int ventas[]) const 
    {
        cout << "\nVentas de cada producto:" << endl;
        for (size_t i = 0; i < productos.size(); i++) 
        {
            cout << productos[i].nombre << ": " << ventas[i] << " unidades vendidas" << endl;
        }
    }
};

int main() 
{
    Tienda miTienda;

    // Agregar productos a la tienda
    miTienda.agregarProducto("Laptop", 1000.0, 10);
    miTienda.agregarProducto("Celular", 500.0, 20);
    miTienda.agregarProducto("Tablet", 300.0, 15);

    // Crear un arreglo para registrar las ventas de cada producto
    int ventas[3] = { 0, 0, 0 };

    // Mostrar productos disponibles
    miTienda.mostrarProductos();

    // Realizar algunas ventas
    miTienda.venderProducto("Laptop", 2, ventas);
    miTienda.venderProducto("Celular", 5, ventas);
    miTienda.venderProducto("Tablet", 3, ventas);

    // Mostrar ventas de cada producto
    miTienda.mostrarVentas(ventas);

}
