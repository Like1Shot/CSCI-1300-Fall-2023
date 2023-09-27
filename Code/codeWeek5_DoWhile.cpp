#include <iostream>
#include <string>
#include <cassert>

using namespace std;
/* ===== The first midterm will cover the following chapters =====*/
// Chapter 1: Introduction
// Chpater 2: Fundamental Data Types
// Chapter 3: Decisions
// Chapter 4: Loops (only section 4.1 --> While Loops)
// Chapter 5: Functions

double perimeter(double h, double w) {
    return 2 * (h + w);
}
double circumference(double r) {
    return 2 * 3.14 * r; // 2 x PI x r
}
int main(void)
{
    double number;
    do {
        cout << "Enter a number: ";
        cin >> number;
        if (number > 10) {
            break;
        }
    } while (true);

    cout << "You entered a number greater than 10: " << number << endl;

    double height, width; // two variables defined but not initailized on the same line
    double radius; // defined but not initialized
    double result = 0; // defined and initialized
    bool quit = false;

    while(1) {
        char option;
        cout << "Enter an option: compute the perimeter of a (r)ectangle, compute the circumference of a (c)ircle, (q)uit";
        cin >> option;

        if (option == 'r') {
            cout << "Enter the height and width if the rectangle: " << endl;
            cout << "Height: ";
            cin >> height;
            cout << "Width: ";
            cin >> width;

            result = perimeter(height, width);  // Sometimes you want to store the return value of a function call to a variable
            cout << "The perimeter is: " << result << endl;
        }
        else if (option == 'c') {
            cout << "Enter the radius of the circle: " << endl;
            cin >> radius;
            // You can simply call the function and present the return value of the function in a cout.
            cout << "The circumference of the circle is: " << circumference(radius) << endl; 
        }
        else if (option == 'q') {
            cout << "exiting the program... ";
            break;
        }
        else {
            cout << "Enter a vaild option!" << endl;
        }
    }
    while(!quit) {
        char option;
        cout << "Enter an option: compute the perimeter of a (r)ectangle, compute the circumference of a (c)ircle, (q)uit";
        cin >> option;

        switch (option) {
            case 'r':
            cout << "Enter the height and width if the rectangle: " << endl;
            cout << "Height: ";
            cin >> height;
            cout << "Width: ";
            cin >> width;

            result = perimeter(height, width);
            cout << "The perimeter is: " << result << endl;
            break;

            case 'c':
            cout << "Enter the radius of the circle: " << endl;
            cin >> radius;
            // You can simply call the function and present the return value of the function in a cout.
            cout << "The circumference of the circle is: " << circumference(radius) << endl; 
            break;

            case 'q':
            cout << "exiting the program... ";
            quit = true;
            break;

            default:
            cout << "Enter a vaild option!" << endl;
        }
    }
    
    cout << "Goodbye!" << endl;

    return 0;
}
