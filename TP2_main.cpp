#include <iostream>
#include "listas.hpp"

using namespace std;

struct Pizza {
  string gusto;
  int cant;
};

template <typename T> void mostrar(Nodo<T>* lista)
{
    while (lista != nullptr) {
        cout << lista->dato << endl;
        lista = lista->sig;
    }
}

int main()
{
    Nodo<int> *pila = nullptr;
    Nodo<int> *ultpila = pila;
    push(pila, ultpila, 1);
    push(pila, ultpila, 2);
    push(pila, ultpila, 3);
    cout << "Pila (1 2 3)" << endl;
    mostrar(pila);
    cout << endl << "Eliminamos" << endl;
    while (pila != nullptr)
        cout << pop(pila, ultpila) << endl;
    cout << "fin mostrar pila" << endl;
    if (ultpila == nullptr)
        cout << "ultpila == nullptr" << endl;
    cout << "-----------------" << endl;
}
