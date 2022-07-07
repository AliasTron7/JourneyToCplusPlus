#include <iostream>

using std::cin;
using std::cout;

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}


void print_pow(double base , int exponent){
    cout << base << " to the power of " << exponent << " is " << power(base, exponent) << "\n";
}

int main()
{

    double base;
    int exponent;

    cout << "Enter the base : ";
    cin >> base;

    cout << "Enter the exponent : ";
    cin >> exponent;

    print_pow(base , exponent);

    return 0;
}