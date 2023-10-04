#include <iostream>
#include <string>  // .length() .substr() 
#include <iomanip>  // << fixed << setprecision() << 
#include <cassert>

using namespace std;
/* ===== Midterm #1 review requests ===== */
/* ===== Monday =====*/
// Return Value VS Cout --> Scroll down to end of code to see
// More on how to use Assertions and why? 
// operator precedence --> Leap Year Question + De Morgan's Law

/* ===== Wednesday =====*/  // TODAY! //
// Do while
// Pass by Value
// Char VS String --> Single/Double quotes
// More on Strings and its' member functions(methods)

int addTwo(int num); // function prototpye!
// A prototype must specify the function's return type (void if none)
// provide the name of our function
// input parameters must be specified to know how to handle the arguments passed into it upon call.

int main()
{
    /* ===== Do-While Loops ===== */
    int x = 5;
    do {
        cout << "Test" << endl;
    }
    while(x < 5); // a semicolon is used to end the do-while loop statement

    while(x < 5){
        cout << "Test" << endl;
    }

    /* ===== Pass By Value ===== */  // ===== Pass by Reference ===== //
    int num = 5;    // a copy of the value 5 is created and passed into the function
    cout << addTwo(num) << endl;
    cout << num << endl;    // variable "num" within the main function has not been modified
    
    /* ===== Char VS Strings ===== */
    char c = 'A';       // Single Quotes!
    string str = "A";   // Double Quotes!
    // You cannot compare a string to a character vice versa
    // You can do so by accessing each element of a string (which is characters)
    if(c == str[0]){
        //do something
    }
    // String is an array of characters!
    
    
    // ===== String Member functions ===== //
    string str_origin = "Hello World"; 
    int str_len = str_origin.length(); // Gives you the length of the string(excluding the null character)
    // .length() has no input parameters and will return the number of bytes of the string(excluding the null character)
    cout << "Original String: " << str_origin << endl;
    cout << "Length of Original String: " << str_len << endl << endl;

    string str_substr = str_origin.substr(6, 5);  // substr([start_index_position], [length]) two input parameters!
    // .substr() returns a newly constructed string and does not modify the original!
    cout << "Original String: " << str_origin << endl;
    cout << "Sub-String: " << str_substr << endl << endl;

    string str_append = str_origin.append(" CSCI 1300");
    cout << "Original String: " << str_origin << endl;   // Append() modifies the originial string!
    cout << "Appended String: " << str_append << endl << endl;

    // String concatenation +
    string str1 = "Hello ";
    string str2 = "World";
    string result = str1 + str2;
    // String concatenation does not modify the strings! 
    cout << "result: " << result << endl;
    cout << "str1 remains untouched: " << str1 << endl;
    cout << "str2 remains untouched: " << str2 << endl;

    return 0;
}
int addTwo(int num) {
    return num + 2;    // "num" is not the same "num" from main function
    // It is only a local copy within the addTwo function(within the scope of addTwo)
}
