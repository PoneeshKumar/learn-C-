// this page will go over the lessons from chapter 2 in the learncpp website.

// 2.1 Introduction to functions

/*
function: a block of code designed to be reusable and perform a specific task
used by function name then. ()


void doPrint() {
    std::cout << "Hello World!"\n;
}

int main() {
    std::cout << "Calling the main function\n";
    doPrint();
    std:cout << "Ending the main function\n";

    return 0;
}

NOTE: Big thing about c++ and c
1. The output in the console is from the top of the main function to the bottom
2. The order you call the functions is the order they'll be executed
3. FIFO - First in First out

its like a queue

NOTE: nested functions are not allowed in c++
*/

// 2.2 Function return Values

/*

#include <iostream>

void getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
}

int main()
{
	getValueFromUser(); // Ask user for input

	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

The problem with the above code is the getValueFromUser() function does not
return a value, bc its a void function it reutrns NULL

we use return types such as int at the start of the function which indicates that
this function will return an integer

theres 2 rules regarding main()
1. Always at the bottom of your code
2. Always returns an int, not void only int
*/

// 2.3 Void return Function

/*
NOTE: void functions do not need a return statement, they are fine with just a std::cout

if u have a void helper function for example

void callHi() {
    std::cout << "Hi\n";    
}

int main() {
    callHi();
    std::cout << callHi();
// The line above causes an error ur basically print out to consonle print out to console hi which is not allowed
    return 0;
}

NOTE: if you have a void helper and call it inside a std:cout in any manner not allowed
*/

// 2.4 Introduction to function parameters and arguments

/*
as we know functions are basically a block of code meant to return or be reusable for a reason, but what if we want to get info from the suer

We use something called arguments. These are inputs that the function is able to take in
and understand at any given moment inside of that function

Ex: int adding(int x, int y) {
    return x + y;
}

we're able to call x and y without intializing it

int doubleValue(int x) {
    return { 2 * x};
}

int main() {
    std::cout << doubleValue(5);

    return 0;
}


# use doubleValue but read input first

int main() {
    std::cout << "Enter an integer: \n";
    int x {};

    std::cin >> x;

    std::cout << doubleValue(x);

    return 0;
}
*/

// 2.5 