/*
Universidad de las Fuerzas Armadas ESPE
Autor: Guillermo Casanova, Shakira Cofre, Esteban Molina
Fecha de creación: 09/10/2018			Fecha de última modificación: 09/10/2018
Probrema: Desarrollo de un programa orientado a objetos que utilice plantillas para realizar operaciones matemáticas básicas.
*/

#include "pch.h"
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
using namespace std;

template <class Type>
class Calculator
{
	public:
		Calculator();
		~Calculator();
		Type Addtion(Type, Type);
		Type Subtraction(Type, Type);
		Type Multiplication(Type, Type);
		Type Division(Type, Type);
};

template<class Type>
Calculator<Type>::Calculator()
{
}

template<class Type>
Calculator<Type>::~Calculator()
{
}

template <class Type>
Type Calculator<Type>::Addtion(Type valueA, Type valueB)
{
	return valueA + valueB;
}

template <class Type>
Type Calculator<Type>::Subtraction(Type valueA, Type valueB)
{
	return valueA - valueB;
}
