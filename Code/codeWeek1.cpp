#include <iostream>
#include <cmath>

using namespace std;
int main(void){
    /* ============================================
    How to Output using cout --> Character Output */
    cout << "This is how you output!" << endl; 
    cout << "Remember you first code? \"Hello World\" " 
         << "You can write in multiple lines like this "
         << "but, it will all be printed on the same line in your terminal" << endl;
    // Note that you must use endl; to end a line and move on to the next line with cout.
    // This is a good way to provide better readabiliy of your code! A good practice!


    /* ===========================================
    How to Intput using cin --> Character Input */
    int in_var1= 0; // Initialize our user input variable --> in this example we name it: in_var
    // Ask the user to input an integer
    cout << "Enter an integer: ";   // why do I not have an endl; here? (Note: )
    cin >> in_var1;
    cout << "The user has inputed " << in_var1 << " for the variable \"in_var1\"" << endl; //check the input

    // ===== Multiple inputs! =====
    int multi_in_var1 = 0;
    int multi_in_var2 = 0;
    // Ask the user to input two integers:
    cout << "Enter two integers: ";
    cin >> multi_in_var1 >> multi_in_var2;
    cout << "The user has inputed " << multi_in_var1 << " for the variable \"multi_in_var1\"" << endl; //check the first input
    cout << "The user has inputed " << multi_in_var2 << " for the variable \"multi_in_var2\"" << endl; //check the sec input

    /*
    Take in the radius as the user input
    Compute the area of a circle
    */
    // ===== This is how we coded last time! =====
    int radius = 0;
    float area = 0; // You can use the double data type --> double area = 0;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = radius * radius * 3.14; // Pi * r^2 is how you compute the area of a cirlce. 
    cout << "The area of the circle with the radius of " << radius << " is: " << area << endl;

    /* ===== This time we will use the cmath library (Look at the top! #include <cmath>) ===== 
     You dont need to understand how to use the cmath library yet! 
     This example is to show that cout, cin are objects of the iostream class
     And pow() is a useful function within the cmath library.
     */
    /*
    int radius = 0; 
    float area = 0;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    // Enter Code Here! 

    cout << "The area of the circle with the radius of " << radius << " is " << area << endl; */


    /* ===== Take in Number of seconds as the user input. Convert it to minuites, second  ===== */

    // You need a variable to store the input: seconds!
    int sec = 0;
    // You need a variable to store the number of minuites!
    int min = 0;
    // Ask the user to input the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> sec;

    // Compute how many minuites and seconds --> remember how to use the modulo operator( % )
    // Enter Code Here!

    // Print out the converted minutes and seconds
    cout << sec << " seconds is: " << min << " minuites and " << sec << " seconds." << endl;

    return 0;
}


