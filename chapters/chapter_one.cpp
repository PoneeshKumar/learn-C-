#include <iostream> // input output stream library

// this is a single comment it uses the // command which tells the compiler to ignore everything after it

/* this is a multi line comment same purpose as the single line comment
    However the comments can go through to multiple lines
    as many as there are needed */


// ways to intialize a variable
/*
* int width { 5 };
* int height = { 6 };
* int height = 6;
* int c ( 6 );
* int e {};
* int a;
*/

// 1.5 Introduction to iostream: cout, cin, endl

/*  
1. #include <iostream> // repersents the input output library that c++ already has
2. std::cout // repersents the send data to console (cout -> character output)
int main() {
    int x{ 5 };
    std::cout << "The value of x is:" << x ";

    return 0;
} // The value of x is 5
3. std::endl // prints the output after to a newline
int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    return 0;
} 
Hi!
My name is Alex.
3.1. A similar call that does the same as std::endl is \n. This is better practice (\n)

4. std:cin // takes in an input from the console of the user
Example:
int main() {
    std::cout << "Enter a number: \n";
    int x{};
    std::cin >> x;

    std::cout << "You entered " << x << "\n";

    return 0;
}
Enter a number: 4
You Entered 4
*/

// 1.6 unintialized variables and defined behaviour
/*
unintialized variables are variables that have not been assigned a value.

In C and C++ when this occurs the result of calling the variable is undefined behaviour. This is 
not what is wanted and can lead to unexpected results. The compiler will not throw an error however
This is bad practice and should be avoided especially when new to language
*/

// 1.7 Keywords and Identifiers

/*
keywords are words, resereved for the compilers that have special meanings and cannot be used as an identifier.
The list is available here: https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/

Identifiers are names given to variables, functions, clases etc. They follow specific guidelines

1. Variables

int value; // good
int Value; // allowed but not reccommended

2. Functions
int my_function(); // good
int MyFunction(); // allowed but not reccommended
int myFunction(); // good
int my function(); // not allowed bc of space
*/

// 1.8 Whitespace and Formatting

/*
whitespace is any character used for formatting purporses, spacesm tabs, newlines etc.
some items require this such as defining a variable,

Good:
int x ( 3 );

Bad:
intx ( 3 );

No need to add tabs however best practice is to use them for formatting and readability.

Always use the formatting style of the project you are working on.
*/

// 1.9 introduction to literals and operators
/*
literals: values that are directly written into the source code.

operators: uses literals to perform operations on them. The result of the operation is also a literal.

*/

// 1.10 introduction to expressions

/*
An expression is a combintion, of opertators, types, and literals that can be evalueted to produce a value.
side effects: occur when an expression modified some state.
*/

// 1.11 Developing first statments

// Problem:  create a problem that asks the user for an integer and tells them double that interger is what

int main() {
    std::cout << "Enter an integerer \n";
    int x {};
    std::cin >> x;

    std::cout << "Double the number " << x << " is: " << 2*x << "\n";
    return 0;

}


int main() {
    std::cout << "Enter an integer: .\n";

    int num { };
    std::cin >> num;

    std::cout << "Enter another integer: .\n";

    int num2 { };
    std::cin >> num2;

    std::cout << num << " + " << num2 << " is " << num + num2 << ".\n";
    std::cout << num << " - " << num2 << " is " << num - num2 << ".\n";
    
    return 0;
}