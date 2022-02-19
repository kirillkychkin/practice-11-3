// Practice-11-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/* Выводит приветствие используя std::cout */
void PrintGreeting()
{

    std::cout << "Hello Skillbox!\n";
}

// Принимает на вход два значения типа int, возвращает их произведение 
int multiply(int integer1, int integer2)
{
    return integer1 * integer2;
}

// Выводит приветствия используя PrintGreeting и произведение двух чисел
// функцией mutiply
int main()
{
    PrintGreeting();

    std::cout << multiply(3, 9) << std::endl;
}
