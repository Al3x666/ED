//clase 4
#include <vector>
#include <iostream>
using namespace std;

void imprime(vector <int> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
}

int main()
{
    vector <int> v;
    //llenar el vector con 0, cinco veces
    v.assign(5, 0);
    imprime(v);
    system("pause");
    system("cls");

    //inserta 15 en la ultima posicion
    v.push_back(15);
    imprime(v);

    //quita el ultimo elemento
    v.pop_back();
    imprime(v);

    //inserta al principio un 5
    v.insert(v.begin(), 5);
    imprime(v);
    
    //borra el 1er elemento del vector
    v.erase(v.begin());
    imprime(v);

    //emplace() inserta 25 al principio
    v.emplace(v.begin(), 25);
    imprime(v);

    ///emplace_back() inserta 20 al final
    v.emplace_back(20);

    //borrar completamente
    v.clear();
    imprime(v);

    //swap entre dos vectores
    vector <int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v1.swap(v2);
    imprime(v1);
    imprime(v2);


}
