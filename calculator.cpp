#include "calculator.h"

/*
* Лабораторна робота №2
* З дисципліни "Архітектура комп'ютера2"
* Виконав: Духота Валентин
* 
* Цей файл містить реалізацію базових
* математичних операцій для калькулятора.
*/

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
