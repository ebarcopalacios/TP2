#ifndef LISTAS_HPP_INCLUDED
#define LISTAS_HPP_INCLUDED

template <typename T> struct Nodo
{
  T dato;
  Nodo<T>* sig; 
  Nodo<T>* ult; //la lista tambien debe apuntar al último nodo
}

template <typename T> T pop(Nodo<T>* &pila)
{
 
}
