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

template <typename T> void push(Nodo<T>* &pila, Nodo<T>* &ultpila, T valor)
{
	Nodo<T>* nuevo = new Nodo<T>;
	nuevo->dato = valor;
	nuevo->sig = pila;
    if (nuevo->sig == nullptr)
        nuevo->ult = nuevo;
    else {
        Nodo<T>* aux_sig = nuevo->sig; 
        nuevo->ult = aux_sig->ult;
    }
	pila = nuevo;
    ultpila = nuevo->ult;
}

template <typename T> T pop(Nodo<T>* &pila)
{
	if (pila == nullptr) {
		std::cout << "Error: pop en pila vacia" << std::endl;
		exit(EXIT_FAILURE);
	}
	T valor = pila->dato;
	Nodo<T>* aux_elim = pila;
	pila = pila->sig;
    if (pila == ultpila)
        ultpila = nullptr;
	delete aux_elim;
	return valor;
}

template <typename T> T agregar(Nodo<T>* &cola, Nodo<T>* &ultcola, T valor)
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
    nuevo = ultpila;
}

#endif
