// Practice-11-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/* ������� ����������� ��������� std::cout */
void PrintGreeting()
{

    std::cout << "Hello Skillbox!\n";
}

// ��������� �� ���� ��� �������� ���� int, ���������� �� ������������ 
int multiply(int integer1, int integer2)
{
    return integer1 * integer2;
}

// ������� ����������� ��������� PrintGreeting � ������������ ���� �����
// �������� mutiply
int main()
{
    PrintGreeting();

    std::cout << multiply(3, 9) << std::endl;
}
