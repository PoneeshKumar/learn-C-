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

// 2.5 Local variables and scope

/*
Vairables are only accessivle in the scope they are defined in. This is called local scope.

What does this mean. Take a function 
int add(int x, int y) {
    return x + y ;
 }

 x and y are local variables to the add function, this is because if outside of the add function we try to call x or y 
 we will receive an error. Now lets continue the example

 int main() {
    int x { 5 };
    int y { 6 };

    add(x,y);
    return 0;
}

ALWAYS START AT MAIN:
inside of main x is 5 and y is 6 both local to main, then we call add 5, 6 so now the add function is called with 2 local variables x and y

it returns 11 and then the scope of x and y is gone from add and we go back to main where x and y are 5 and 6.

once return 0 happens x and y now no longer mean anything and are gone from mempry.
 */

 // 2.6 and 2.7 Functions and Forward Declerations

 /*
 Functions are ofcourse useful when writing code and required to become a better programmer. But what happens when we call a function before its defined


 int main() {
    std::cout << add(5,6);
    return 0;
}

int add(int x, int y) {
    returnn x + y;
}

running this code will result in an error, because the compiler does not know what the add function is when main is called. The compiler reads from main to add and does not know what add is 


The way forward declerations work is to decalre a function to exist before its defined. Remember when we said int x; vs int x = 5; think of it like this

int add(int x, int y); // this is a forward decleration, isnt defined but the compiler knows it exists

 int main() {
    std::cout << add(5,6);
    return 0;
}

int add(int x, int y) {
    returnn x + y;
}
    
now this works.
 */

 // 2.8 Programs With Multiple Code Files

 /*
 when we are working with larger codebases we see that we need multiple files for different things and files with certain helpers.
 Due to this we come across the need of running multiple files at once. This happes by compiling the files together.

 But how?

 lets see we have
 main.cpp

 int main() {
    std::cout << add(5,6);
    return 0;}


and we run the above...

compiler asks wtf is add??? Error

now we put add.cpp

int add(int x, int y) {
    return x + y;
}
to use we know what add is but how will the compiler?

this is where forward declerations come in.

we can add this in main.cpp


int add(int x, int Y);
 int main() {
    std::cout << add(5,6);
    return 0;
}
 */

 // 2.9 Naming collisions and an introduction to namespaces

 /*
 Naming collisions are when 2 or more identifiers are so similar that the compiler cannot determine that they are not the same thing
 
 if you have an a.cpp with func mv and then a main.cpp with a func mv compiler will be fine however linker will not
  */
