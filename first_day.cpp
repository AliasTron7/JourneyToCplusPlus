#include <iostream> //includeing the iostream file to take the standerd I/O file codes to use

using namespace std; // make names from std visible without std:: (§2.4.2)

double square(double x)
{
    return x * x;
}

void printSquare(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{

    // 1.
    // std::cout<<"hello world\n"; // (<< ) puts to  sign tell compiler to put string hello world to the std::cout
    // // \n is a single special character to identify that this is a new line
    // // std specifies that the name cout should be found in standerd lib namespace

    // 2.
    // cout<<"hello wrold\n";

    printSquare(1.234);

    // 3. data types
    // bool // Boolean, possible values are true and false
    // char // character, for example, 'a', ' z', and '0' , '9' and special characters
    // int // integer, for example, 1, 42, and 1066
    // double // double-precision floating-point number, for example, 3.14 and 299793.0
}