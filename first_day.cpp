#include <iostream> //includeing the iostream file to take the standerd I/O file codes to use

using namespace std; // make names from std visible without std:: (§2.4.2)

constexpr double square(double x)
{
    return x * x;
}

void printSquare(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

void some_function() // function that doesn’t return a value
{
    double d = 2.2; // initialize floating-point number
    int i = 7;      // initialize integer
    d = d + i;      // assign sum to d
    i = d * i;      // assign product to i (truncating the double d*i to an int)
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

    // bool a = true;
    // int b = 45;
    // float c = 5.23;
    // double k = 6.21;
    // char d = 'l';

    // here we don't need to explecitly difine the variable type because we are giving the value;
    // we do not use type conversion here
    // auto a = true;
    // auto b = 45;
    // auto c = 5.23;
    // auto k = 5.21;
    // auto d = 'l';

    // const: meaning roughly ‘‘I promise not to change this value’’ (§7.5). This is used primarilyto specify interfaces, so that data can be passed to functions without fear of it being modified. The compiler enforces the promise made by const.

    const double dmv = 17;
    int var = 17;
    // constexpr: meaning roughly ‘‘to be evaluated at compile time’’ (§10.4). This is used primarily to specify constants, to allow placement of data in memory where it is unlikely to be corrupted, and for performance.

    constexpr double max1 = 1.5 * square(dmv); // OK if square(17) is a constant expression
    // the function that are using it must be constexpr eveluted at compile time
    // constexpr double max2 = 1.4 * square(var); // error : var is not a constant expression
    const double max3 = 1.4 * square(var); // OK, may be evaluated at run time

    cout << max1 << endl;
    // cout << max2 << endl;
}
