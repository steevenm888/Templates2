/*
Universidad de las Fuerzas Armadas ESPE
Autor: Guillermo Casanova, Shakira Cofre, Esteban Molina
Fecha de creaci�n: 09/10/2018			Fecha de �ltima modificaci�n: 09/10/2018
Probrema: Desarrollo de un programa orientado a objetos que utilice plantillas para realizar operaciones matem�ticas b�sicas.
*/

//#include "pch.h"
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;

template <class Type>
class Calculator
{
	public:
		Calculator();
		~Calculator();
		Type Pow(Type, Type);
		Type Addtion(Type, Type);
		Type Subtraction(Type, Type);
		Type Multiplication(Type, Type);
		Type Division(Type, Type);
		Type AreaTriangle(Type,Type);
		Type AreaRectangle(Type, Type);
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

template <class Type>
Type Calculator<Type>::Multiplication(Type valueA, Type valueB)
{
	return valueA * valueB;
}

template <class Type>
Type Calculator<Type>::Division(Type valueA, Type valueB)
{
	return valueA / valueB;
}

template <class Type> 
Type Calculator<Type>::Pow(Type base, Type power)
{
	return pow(base, power);
}

template <class Type>
Type Calculator<Type>::AreaTriangle(Type base, Type height)
{
	return (base*height)/2;
}

template <class Type>
Type Calculator<Type>::AreaRectangle(Type base, Type height){
	return base * height;
}


int main()
{
	system("color 0a");
	int selector;
	do
	{
		system("cls");
		cout << "\t\t\t\t\t**Funciones en class utilizando templates**" << endl << endl;
		cout << "1. Operar sobre enteros\n2. Operar sobre reales\n3. Salir\n> ";
		cin >> selector;

		if (selector == 1)
		{
			int numberA, numberB;
			cout << "Numero A: ";
			cin >> numberA;
			cout << "Numero B: ";
			cin >> numberB;
			Calculator<int> calculator;
			cout << "Suma: " << calculator.Addtion(numberA, numberB) << endl;
			cout << "Resta: " << calculator.Subtraction(numberA, numberB) << endl;
			cout << "Division: " << calculator.Division(numberA, numberB) << endl;
			cout << "Multiplicacion: " << calculator.Multiplication(numberA, numberB) << endl;
			cout<< "Potencia: "<<calculator.Pow(numberA, numberB)<<endl;
			cout<< "Area de un triangulo:"<<calculator.AreaTriangle(numberA,numberB)<<endl;
			cout<< "Area de un rectangulo:"<<calculator.AreaRectangle(numberA,numberB)<<endl;
			system("pause");
		}
		else if (selector == 2)
		{
			double numberA, numberB;
			cout << "Numero A: ";
			cin >> numberA;
			cout << "Numero B: ";
			cin >> numberB;
			Calculator<double> calculator;
			cout << "Suma: " << calculator.Addtion(numberA, numberB) << endl;
			cout << "Resta: " << calculator.Subtraction(numberA, numberB) << endl;
			cout << "Division: " << calculator.Division(numberA, numberB) << endl;
			cout << "Multiplicacion: " << calculator.Multiplication(numberA, numberB) << endl;
			cout<< "Potencia: "<<calculator.Pow(numberA, numberB)<<endl;
			cout<< "Area de un triangulo:"<<calculator.AreaTriangle(numberA,numberB)<<endl;
			cout<< "Area de un rectangulo:"<<calculator.AreaRectangle(numberA,numberB)<<endl;
			system("pause");
		}
		else if (selector == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Seleccion incorrecta, intente de nuevo" << endl;
			system("pause");
		}
	} while (true);
}
