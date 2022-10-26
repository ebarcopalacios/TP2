#include <iostream>
#include "listas.hpp"

using namespace std;

struct Pizza {
  string gusto;
  int cant;
};

int criterio_pizza(Pizza a, Pizza b)
{
    if (a.gusto == b.gusto=
        return 0;
    else 
        return a.gusto > b.gusto ? 1 : -1;
}

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
        cout << "ultpila == nullptr" << endl;// para asegurarme que el ultimo nodo esta vacio
    cout << "-----------------" << endl;
  
    Nodo<string> *cola = nullptr;
    Nodo<string> *ultcola = cola;
    agregar(cola, ultcola, "uno"s);
    agregar(cola, ultcola, "dos"s);
    agregar(cola, ultcola, "tres"s);
    cout << "Cola (uno dos tres)" << endl;
    mostrar(cola);
    cout << endl << "Eliminamos" << endl;
    while (cola != nullptr)
        cout << pop(cola, ultcola) << endl;
    cout << "fin mostrar cola" << endl;
    if (ultcola == nullptr)
        cout << "utcola == nullptr" << endl;// para asegurarme que el ultimo nodo esta vacio
    cout << "-----------------" << endl;
  
   
}
      




