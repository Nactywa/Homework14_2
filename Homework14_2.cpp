// Homework14_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
int main()
{
    std::string fear = "1456285";
    std::cout << fear << "\n";

    std::cout << fear.length() << "\n";

    char first = fear[0];
    std::cout << first << "\n";
    
    int length = fear.length();
    char last = fear [length -1];
    std::cout << last << "\n";
}

