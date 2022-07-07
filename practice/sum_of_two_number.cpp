// Write a program in C++ to print the sum of two numbers.
// Write a program in C++ to print the sum of two numbers using variables.


#include <iostream>

using namespace std;


int sum_of_two_number(int num1 , int num2){
    return num1+num2;
}


void print_sum (int num1 , int num2){
    cout << "The sum of the " << num1 << " and " << num2 << " is " << sum_of_two_number(num1 , num2) << endl;
}


int main(){

    int num1 , num2;

    cout << "Enter the number1 : ";
    cin >> num1;
    
    cout << "Enter the number2 : ";
    cin >> num2;


    print_sum(num1 , num2);
    return 0;
}