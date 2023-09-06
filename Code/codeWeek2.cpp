#include <iostream>
#include <string>
// This code will be updated for Friday! We will only cover a portion of it on Wednesday

using namespace std;
int main(){
    /* ===== Booleans ===== */
    int x = 0;
    cin >> x;

    // If x is a negative value, our bool type varaible is_negative will be 1 (true)
    // If x is a positive or equal to 0, is_negative will be 0 (false)
    bool is_negative = x < 0;
    cout << is_negative << endl;
    /*
        Less than: a < b
        Less than or equal to: a <= b
        Greater than: a > b
        Greater than or Equal to: a >= b
        Equal to: a == b
        Not Equal to: a != b
    */
    /* ===== String type ===== */
    // Use double quotes for strings and single quotes to store a single character.
    // "A" is the equivalent of 'A' with '\0' (NULL character which is the equivalent of an integer 0)
    /*
    int point = 0;
    string grade = "A+";

    cout << "Enter your points (integer between 0 and 100): ";
    cin >> point;

    if (point < 0 || point > 100) {
        cout << "Enter an integer between 0 and 100 (inclusive): " << endl;
        return 1;
    }
    else {
        if (point >= 93) {
            grade = "A+";
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 90) {
            grade = "A-";
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 87) {
            grade = "B+";
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 83) {
            grade = "B";
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 80) {
            grade = "B-";
            cout << "Your grade is: " << grade << endl;
        }
        else {
            cout << "You can do better than that!" << endl;
        }
    }
    */
    /*
    int point = 0;
    char grade = 'F';
    
    cout << "Enter your points (integer between 0 and 100): ";
    cin >> point;

    if (point < 0 || point > 100) {
        cout << "Enter an integer between 0 and 100 (inclusive): " << endl;
        return 1;
    }
    else {
        if (point >= 93) {
            grade = 'A';
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 83) {
            grade = 'B';
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 73) {
            grade = 'C';
            cout << "Your grade is: " << grade << endl;
        }
        else if (point >= 63) {
            grade = 'D';
            cout << "Your grade is: " << grade << endl;
        }
        else {
            cout << "Your grade is: " << grade << endl;
        }
    } */
    // Tip: if you want to indent a specific chunk of code, highlight the lines and do Command + ] or ctrl + ]
    // Tip: for multi-line commenting, use ( Comnmand + / ) or ( crtl + / )
/*
Write a code that converts a user inputed seconds (input must be greater than zero)
to the number of hours, minuites, and seconds. Use the if, else statement to validate user input.
*/

/*
    int sec = 0;
    int min = 0;
    int hour = 0;
    
    // Ask the user to input the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> sec;

    // Input value should be greater than or equal to 0
    if (sec < 0){ // Any value less than 0 will be our abnormal case!
        cout << "Enter a number greater than or equal to 0" << endl;
        return 1; // remember what I have said about returning non-zero values!
    }
    else {
        hour = sec / (60 * 60); 
        sec = sec % 3600;

        min = sec / 60;
        sec = sec % 60;

        // Print out the converted minutes and seconds
        cout << sec << " seconds is: " << min << " minuites and " << sec << " seconds." << endl; 
    }
*/
    return 0; // a normal exicution or exit of a main will return 0.
}

