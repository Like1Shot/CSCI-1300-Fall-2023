#include <iostream>
#include <cmath>
#include <iomanip> // input/output manipulation
#include <cassert> // Won't use it yet! Say hi and get familiar with the name!
/* ===== Function Parameters and Arguemtns ===== */

// Function Parameters: Variables defined in the functions' declaration --> These are variables local to the function
// It defines the expected input of the function --> its' data type and name of the variable the function will work with

// Function Arguments: 
// The actual values provided to the callee (the function you are calling)
// the values passed to the function to be used as the initial value for the functions' parameters.


/* ===== Global and Local Scopes ===== */
// Global: In C/C++, Anything defined outside a function (remember, the main is also a function!)
// Local: Variables declared in the block are local to the code block.

/* ===== Function Prototypes ===== */
// This way, we can let the compiler know the existance of a function even before the actual definition(implementation)of the function
// it allows the use of functions before the definition of the function.
// Comes in handy to do so especially when you have mulitple code files. We will learn more about "multiple code files" and "header files"
// Otherwise, you can still stick to the option of implementing the functions above the main( )
// Also, be aware that ourPow( ) is called by the computeCircleArea( ) function. 
// Therefore, ourPow( ) must be implemented before computeCircleArea( )

/* ===== Ordering of Global Variables/Function Prototypes ===== */
// Good practice is to follow the following order:
// #include <libraries>
// #define MACROS --> This may be introduced to you leter in the course
// Global Constants
// Global Variables --> Constants should come prior of variables where the values change
// Function Prototypes
// main Function

bool checkValidInputBool (int input);
double ourPow(double base, int exponent);
double computeCircleArea (int radius);

using namespace std;
// The main is also a function! "main" is the name of the function
// So in the analogy of y = f(x) "f" is the name of the function
//                    y   =   f (  x  )
//                 output = main(input)
//                 output = main(void)  our input is "void" empty
//                    0   = main(void)  our output is the return value.
// We return 0 for normal execution and 1 (usually 1 or any other non-zero value) for abnormal executions
// Specific meaning of a non-zero return value other than 1 can vary depending on the context of the program!
// More about return values other than 0 and 1 in the next few lectures!

void printOutBox() { // Void type functions can have input! but for this example, we will not provide one.
// Calling this function will print out "Hello" in a box.
    cout << "---------" << endl;
    cout << "| Hello |" << endl;
    cout << "---------" << endl;
    // NO returns!! --> the function type is the return type.
    // Right now, the function type is void so the return is void (No return value)
}
bool checkValidInputBool (int input) { // We can try boolean type functions!
    if (input < 0) {
        return false; // 0 indicates false --> Invalid input
    }
    else {
        return true; // 1 indicates true --> Valid input
    }
}
double ourPow(double base, int exponent)
{
    double result = 1.0;
    for (int i=0; i<exponent; i++) {
        result *= base; // result = result * base;
    }
    return result;
}
double computeCircleArea (int radius) { // A function that we build!
    double area = 0;
    area = M_PI * ourPow(radius, 2); // We are using a built-in-function pow( ) from the cmath library
    
    return area;
}
int main(void) {
    int radius = 0;

    printOutBox();
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if(!checkValidInputBool(radius)) {
        cout << "Please Enter a Valid Input! " << endl;
        return 1; // This return is within our "main" block. We return 1 for abnormal executions.
        // If return 1 is executed... the main will end with a return(output of a function) value of 1.
    }
    // Inside iomaip, we can use the setprecision( ) function to set the precision to 3 deciamal places
    // std::fixed is used to display a fixed number of decimal places 
    cout << "The area of the circle with the radius of " << radius << " is:  " << computeCircleArea(radius) << endl;
    cout << "The area of the circle with the radius of " << radius << " is:  " << fixed << setprecision(2) << computeCircleArea(radius) << endl;

    return 0;
}
