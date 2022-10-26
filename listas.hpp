#ifndef LISTAS_HPP_INCLUDED
#define LISTAS_HPP_INCLUDED

template <typename T> struct Nodo
{
  T dato;
  Nodo<T>* sig; 
  Nodo<T>* ult; //la lista tambien debe apuntar al último nodo
}

template <typename T> void push(Nodo<T>* &pila, T valor)
{
	Nodo<T>* nuevo = new Nodo<T>;
	nuevo->dato = valor;
	nuevo->sig = pila;
    if (nuevo->sig == nullptr)
        nuevo->ult = nuevo;
    else
	nuevo->ult = nuevo->sig.ult;    
	pila = nuevo;
}

template <typename T> T pop(Nodo<T>* &pila)
{
   
}
