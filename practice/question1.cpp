// Write a program in C++ to print a welcome text in a separate line.

#include <iostream>

using std::cout;

int main()
{

    char name[20] ;

    cout << "Enter your name : " ;
    std::cin >> name;

    cout << "hello welcome here " << name << std::endl;
}