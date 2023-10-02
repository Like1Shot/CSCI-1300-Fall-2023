#include <iostream>

using namespace std;
/* ===== Midterm #1 review requests ===== */
/* ===== Monday =====*/
// Return Value VS Cout --> Scroll down to end of code to see
// More on how to use Assertions and why? 
// operator precedence --> Leap Year Question + De Morgan's Law

/* ===== Wednesday =====*/
// Do while

// A leap year is a year that is evenly divisible by 4,
// except for years that are divisible by 100 but not by 400.
bool isLeapYear(int year) {
    assert(year > 0); // This will prevent you from running a test case where the year is 0 or less.
    if (year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}
// is leap year if ((year % 4 == 0 __ year != 0) __ year % 400 == 0)
// Fill the blanks above!

void runTests() {
    assert(isLeapYear(1944) == true);
    assert(isLeapYear(2000));
    assert(!isLeapYear(1900));
    cout << "All test cases have passed!" << endl << endl;

    // NOT a good habit! 
    return; // This is legal. You can use a return statement to end a void type function
    // However, you cannot return a value in a void type function.
}
int main() {

    runTests();

    /*
    1.  * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *
    */

    // Simple approach
    // print 5 cout statements

    cout << "Approach number 1" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << "* * * * *" << endl;

    cout << endl << endl;

    // Loop approach - can we use a loop to do this?
    // We know that "* * * * *" is printed 5 times
    // Let's explore the options

    cout << "Approach number 2" << endl;

    // 1. Let's look at a single for loop
    for (int i=0; i<5; i=i+1) {
        cout << "* * * * *" << endl;
    }

    cout << endl << endl;
    cout << "Approach number 3" << endl;
    for (int i=0; i<5; i++) { // Outer loop - This runs 5 times
        // This needs to print 5 characters
        for (int j=0; j<10; j++) { // Inner loop - This runs 10 times
            cout << "* ";
        }
        cout << endl;
    }


    // Other patterns
    /*
    2.  @ * * * *
        * @ * * *
        * * @ * *
        * * * @ *
        * * * * @
    */

    // The top for loop is for printing the rows
    for (int i=0; i<5; i++) {
        // The inner for loop is for printing the content of the row
        for (int j=0; j<5; j++) {
            if (i == j) {
                cout << "@ ";
            }
            else {
                cout <<"* ";
            }
        }
        cout << endl;
    }


   /*
    3.  @
        * @ 
        * * @
        * * * @
        * * * * @
    */

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j < i) {
                cout << "* ";
            }
            else if (j == i){
                cout << "@ ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
    // ===== Difference between cout and return ===== //
    // Return will exit the current function and returning the value(return [value]) to the caller of the function.
    // cout only displays(outputs) something to the console.

    // ===== Why are we returning 0 in the main? How can I see the return value of the main function? ===== //
    // After running an execuatable file, run the following command: echo $?
    // $? is a unix variable that holds the exit status of the previous command(./a.out or ./a.exe)
    // Exit status 0 is for a normal(successful) execution of a program or command.
    // Exit status 1 is for an abnormal(unsuccessful) execution of a program or command
}
