#include <iostream>
#include <string>
#include <cassert>
using namespace std;
const string USERNAME = "Chanheum Park";

// Lets write a string type function that returns the fullname when you provide the
// first and last name as an argument appon function call.
// The two parameters of our fullName function are a string type parameter "firstname" and "lastname"
string fullName(string firstname, string lastname) {
    string fullname = firstname + " " + lastname;

    return fullname;
}
// Lets write a function to compare two strings. (Note that it is case sensitive!)
// It will return false(0) if the two strings are not identical
// It will reutrn true(1) if the two strings are identical 
bool myStringCompare(string input_string) {
    if (input_string == USERNAME){
        return true;
    }
    else {
        return false;
    }
}
void runTests() {
    // assert(<A True Expresion>)
    assert(fullName("CHANHEUM", "PARK") == "CHANHEUM PARK");
    assert(fullName("Chanheum", "Park") == "Chanheum Park");
    assert(myStringCompare("Chanheum Park"));
    assert(myStringCompare("CHANHEUM PARK") == false);
}
int main(void) {
    runTests(); // If all our test cases pass, then it will proceed to the next line.

    string first_name;
    string last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter you last name: ";
    getline(cin, last_name);

    // A Function Call within a Function Call!
    if(myStringCompare(fullName(first_name, last_name))) 
        cout << "Correct Username" << endl;
    else
        cout << "Incorrect Username" << endl;

    return 0;
}
