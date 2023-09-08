#include <iostream>
#include <string>

/* ===== Auto Format Your Code! ==== */
    // On Windows : Shift + Alt + F
    // On MAC OS: command + k + f
    // On Ubuntu : Ctrl + Shift + I
// However, it is a good practice to format your code the right way by your own.
// A cheatsheet will be posted for you soon for shortcut keys that are good to know!

// Tip: if you want to indent a specific chunk of code, highlight the lines and do Command + ] or ctrl + ]
// Tip: for multi-line commenting, use ( Comnmand + / ) or ( crtl + / )

using namespace std;
int main(){
    /* ===== Booleans ===== */ 
/*
    int x = 0;
    cin >> x;
    // If x is a negative value, our bool type varaible is_negative will be 1 (true)
    // If x is a positive or equal to 0, is_negative will be 0 (false)
    bool is_negative = x < 0;
    cout << is_negative << endl;
*/

    /* ===== Relational Operators =====
        Less than: a < b
        Less than or equal to: a <= b
        Greater than: a > b
        Greater than or Equal to: a >= b
        Equal to: a == b  (Different from a = b, assign the value in b to a)
        Not Equal to: a != b
    */


    /* ===== String type ===== */
    // Use double quotes for strings and single quotes to store a single character.
    // "A" is the equivalent of 'A' with '\0' (NULL character which is the equivalent of an integer 0)
/*
    string str = "A";
    char c = 'A';
    cout << "Strings and Characters(char) are different!" << endl;
    cout << "Our String type variable \"str\" has a \"NULL character after \"A\"" << endl;
    cout << "check the ASCII table: https://www.asciitable.com" << endl;
    cout << "\"A\" is equal to " << (int)str[0] << " in the ASCII table "
         << "and when we access the next element of our str variable, we get " << (int)str[1] << endl << endl;
    // char takes up 1 byte (8 bits) of memory, therefore you can only store 2^8 = 256 different characters
    // our ASCII table has 0 ~ 127 characters and the extended ASCII codes shows the 128 ~ 255 characters.
    // We will learn more about the string class(std::string) later.
*/

    /* ===== Grading Example from Wednesday Lecture ===== */
/*
    int point = 0;
    string grade = "A+";

    cout << "Enter your points (integer between 0 and 100): ";
    cin >> point;

    if (point < 0 || point > 100) {
        // logical AND = &&
        // logical OR = || 
        cout << "Enter an integer between 0 and 100 (inclusive): " << endl;
        return 1; // We will discuss more about why we returned 1 here when we learn about functions!
        // For now, just remember that for abnormal executions of a code, we return a non-zero value.
    }
    else { // example of a nested if, else-if, else
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
    int temp = 0;
    // ===== Constant Variables! ====== //
    // Assume that we are at sea level and the boiling, freezing tempuratue doesn't change!
    const int BOIL_TEMP = 100; // This is how to use constant variables!
    const int FREEZE_TEMP = 0; // Use all CAPITAL LETTERS for constant variables.
    string status = "Liquid";

    cout << "Enter the temperature: ";
    cin >> temp;

    // Using AND &&
    if (temp > BOIL_TEMP && temp < FREEZE_TEMP){
        status = "Liquid";
    }
    else {
        status = "Not Liquid";
    }
    cout << status << endl;
/*    
    // Using OR ||
    if (temp <= FREEZE_TEMP || temp >= BOIL_TEMP) {
        status = "Not Liquid";
    }
    else {
        status = "Liquid";
    }
    cout << status << endl;
*/

// ===== Nested if, else-if, else ===== //
// =====       Tax Problem         =====// // Textbook page 76
    const double RATE1 = 0.10;
    const double RATE2 = 0.25;
    const double RATE1_SINGLE_LIMIT = 32000;
    const double RATE1_MARRIED_LIMIT = 64000;

    double tax1 = 0;
    double tax2 = 0;

    double income;
    cout << "Please enter your income: ";
    cin >> income;

    cout << "Please enter s for single, m for married: ";
    string marital_status;
    cin >> marital_status;

    if (marital_status == "s") {
        if (income <= RATE1_SINGLE_LIMIT) {
            tax1 = RATE1 * income;
        }
        else {
            tax1 = RATE1 * RATE1_SINGLE_LIMIT;
            tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
        }
    }
    else {
        if (income <= RATE1_MARRIED_LIMIT) {
            tax1 = RATE1 * income;
        }
        else {
            tax1 = RATE1 * RATE1_MARRIED_LIMIT;
            tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT);
        }
    }
    double total_tax = tax1 + tax2;

    cout << "The tax is $" << total_tax << endl;
    
    return 0; // a normal execution or exit of a main will return 0.
}
