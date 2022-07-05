#include <iostream>
#include <cmath>

// using namespace std; // using directives
using std::cout; // using dicleration
using std::cin;

int main(){ // main function
    int base , exponent;
    cout << "Hello World \n" ;


    cout << "what is the base value ? :  " ;
    cin >> base ; 
    cout << "what is the exponent value ? :  " ;
    cin >> exponent;



    cout << pow(base,exponent);

    
    return 0;
}