#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    /* ===== Char vs String ===== */
    // ''single quotes are used for char(character)
    // ""double quotes are used for strings
    
    char ch = 'A'; 
    string str = "A";
    // Recall from week 2 that these two are not the same thing!
    cout << "It looks like ch and str are the same but, a string ends with a NULL character. " << endl
         << "If we access the first element of the string we get the same: " << str[0] << endl;
    cout << "But, when we see the next element: " << (int)str[1] << endl;

    cout << "And our character variable chr doesnt have that: " << ch << endl;
    
    // Check the ASCII table for the following
    char cap_A = 'A';
    char cap_B = 'B';
    char cap_C = 'C';

    char low_a = 'a';
    char low_b = 'b';
    char low_c = 'c';
    // We are typecasting the character to an integer to check the ASCII value!
    // The tradiaditional way to type cast is (int)chr as shown bellow. (C language style casting)
    // In C++ we use static_cast to type cast
    // static_cast<int>(ch)
    cout << cap_A << " as an integer is " << (int)cap_A << endl;              // C way to typecast
    cout << cap_B << " as an integer is " << static_cast<int>(cap_B) << endl; // C++ way to typecast
    cout << cap_C << " as an integer is " << (int)cap_C << endl;

    /* ===== User Input Strings ===== */
    // getline(cin, <string variable name>)
    string input_str;

    cout << "Please enter a string of text: "; 
    getline(cin, input_str);

    cout << "The string you have entered is: " << input_str << endl;

    /* ===== Concatenation of Strings ===== */
    string str1 = "Go";
    string str2 = "Buffs";
    cout << "String Concatenations = " << str1 + " " + str2 + "!" << endl;
    
    /* ===== Manipulate your strings --> Methods (member functions)===== */
    // Usefull methods(member functions) of the string class
    int len = input_str.length();  // This will provide the length of the string
    string appended_str = input_str.append("[appended portiion]"); // This appends the string
    string sub_str = input_str.substr(0, 8);
    string replaced_str = input_str.replace(0, 8, "REPLACED"); // This replaces from index 0 to 0+8 with "REPLACED"

    cout << "The length of the string you entered is: " << len << endl;
    cout << ".append() method: " << appended_str << endl;
    cout << ".substr() method: " << sub_str << endl;
    cout << ".replace() method: " << replaced_str << endl;

    /* ===== More on Strings --> Functions ===== */
    // Methods are functions associated with an object or a class. More about this in detail later!
    // Just note that the following are functions that are a part of the C++ standard library <string> 
    int integer_to_str = 1234;
    int result_int = 0;
    float result_float = 0;
    double result_double = 0;
    string str_to_numeric = "1234";
    string str_to_numeric_decimal = "1234.1234";
    string result_str = "";
    
    result_str = to_string(integer_to_str);       // Converts a numeric value to a string
    result_int = stoi(str_to_numeric);            // stoi(str) converts the str to integer
    result_float = stof(str_to_numeric_decimal);  // stof(str) converts str into float
    result_double = stod(str_to_numeric_decimal); // stof(str) converts str onto double

    cout << "to_string(): " << result_str << endl;
    cout << "stoi(): " << result_int << endl;
    cout << "stof(): " << result_float << endl;
    cout << "stod(): " << result_double << endl;

    return 0;
}
