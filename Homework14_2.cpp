// Homework14_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
int main()
{
    std::string fear = "145628";
    std::cout << fear << "\n";

    std::cout << fear.length() << "\n";

    char first = fear[0];
    std::cout << first << "\n";
    char last = fear[5];
    std::cout << last << "\n";
}

