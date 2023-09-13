#include <iostream>
#include <cmath> // Remember this from two weeks ago? 
#include <iomanip> // input/output manipulation
#include <cassert> // Won't use it yet! Say hi and get familiar with the name!

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

bool checkValidInputBool (int input) { // We can try boolean type functions!
    if (input < 0) {
        return 0; // 0 indicates false --> Invalid input
    }
    else {
        return 1; // 1 indicates true --> Valid input
    }
}
double computeCircleArea (int radius) { // A function that we build!
    double area = 0;
    area = M_PI * pow(radius, 2); // We are using a built-in-function pow( ) from the cmath library
    
    return area;
}

int main(void) {
    int radius = 0;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    //double area = computeCircleArea(radius);
    // Inside iomaip, we can use the setprecision( ) function to set the precision to 3 deciamal places
    // std::fixed is used to display a fixed number of decimal places 
    cout << "The area of the circle with the radius of " << radius << " is:  " << computeCircleArea(radius) << endl;
    cout << "The area of the circle with the radius of " << radius << " is:  " << fixed << setprecision(3) << computeCircleArea(radius) << endl;

    return 0;
}
