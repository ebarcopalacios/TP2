#ifndef LISTAS_HPP_INCLUDED
#define LISTAS_HPP_INCLUDED
//cuando vayas a editar, capaz las indentaciones se vean desordenadas pero en la vista normal
//las indentaciones estan bien (no se porqué)

template <typename T> struct Nodo
{
  T dato;
  Nodo<T>* sig; 
  Nodo<T>* ult; //la lista tambien debe apuntar al último nodo
};

template <typename T> void push(T valor, punteros<T> &lista, Nodo<T>* &pila)
{
	Nodo<T>* ultpila = new Nodo<T>;
	ultpila->dato = valor;
	ultpila->sig = lista.ultimo;
    if (lista.primero == nullptr) {
        lista.primero = ultpila;
        lista.ultimo = ultpila;
    }
    else {
        lista.ultimo = ultpila;
        pila = ultpila;
    }
}

template <typename T> T pop(punteros<T> &lista, Nodo<T>* &listaN)
{
	if (listaN == nullptr) {
		std::cout << "Error: pop en pila vacia" << std::endl;
		exit(EXIT_FAILURE);
	}
    T valor = listaN->dato;
    Nodo<T>* aux_ult = listaN;
	lista.ultimo = aux_ult->sig;
    listaN = lista.ultimo;
	delete aux_ult;
	return valor;
}

template <typename T> void agregar(Nodo<T>* &cola, Nodo<T>* &ultcola, T valor)
{
    Nodo<T>* nuevo = new Nodo<T>;
    nuevo->dato = valor;
    nuevo->sig = nullptr;
    if (cola == nullptr) {
        cola = nuevo;
    } else {
        Nodo<T>* aux = cola;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
    ultcola = nuevo;
}

#endif
