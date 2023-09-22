#include <iostream>
#include <string>

using namespace std;
// Function Prototype is needed because our function implementation
// is after our main function and we are calling the classifyLetter() function within the main
string classifyLetter(char letter);
char toLower(char letter);
char toCapital(char letter);
void runExample1();
void runExample2();

int main(void)
{
    runExample1(); // We call the void type function runExample1()
    runExample2(); // We call the void type function runExample2()

    return 0;
}
// A String type function is used because we want to return a string "a Capitail Letter", "a Lowercase Letter", "Not an Alphabet"
string classifyLetter(char letter) {
    // Refer to the ASCII table
    if (letter >= 65 && letter <= 90) { // 65 ~ 90: Capital Letters
        return "a Capital Letter";
    }
    else if (letter >= 97 && letter <= 122) { // 97 ~ 122: Lowercase Letter
        return "a Lowercase Letter";
    }
    else {
        return "Not an Alphabet";
    }
}
char toLower(char letter) { // If it is a Capital Letter, it will convert it to a lowercase and return it.
    if (letter >= 65 && letter <= 90) {
        return letter + 32; // The difference between Lowercase and Capital letters is the integer value 32.
    }
    return letter; // otherwise (a non-alphabet character in the ASCII table) it will return its' original
}
char toCapital(char letter) { // If it is a Lowercase Letter, it will convert it to a Capital letter and return it.
    if (letter >= 97 && letter <= 122) {
        return letter - 32; // 
    }
    return letter;
}
void runExample1() {
    char ch1;
    char ch2;
    char ch3;

    cout << "Enter any ASCII character: " << endl;
    cin >> ch1;
    cout << ch1 <<" is " << classifyLetter(ch1) << endl;
    
    cout << "Enter any ASCII character: " << endl;
    cin >> ch2;
    cout << ch2 << " is " << classifyLetter(ch2) << endl;

    cout << "Enter any ASCII character: " << endl;
    cin >> ch3;
    cout << ch3 << " is " << classifyLetter(ch3) << endl;
}
void runExample2() { // Next week you will be introduced to loops! (While Loops / For loops)
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    // We will go through an easier example of loops next week.
    // For now, get used to the structure of a loop.
    /* ===== For Loops ===== */
    // for ([initialize control variable]; [condition]; [update control variable])
    for (int i=0; i<10; i++) {
        cout << "CSCI 1300" << endl;
    }
    cout << endl;
    /* ===== While Loops ===== */
    // while (condition) 
    int i = 0;
    while (i < 10) {
        cout << "CSCI 1300" << endl;
        i++;
    }
    // This is how to write a for loop to iterate through each character of a string and convert all Capital letters to a lowercase
    for(int i=0; i<str.length(); i++){
        if(classifyLetter(str[i]) == "a Capital Letter") { // We are calling the classifyLetter() function we implemented to check if it is a capital letter or not
            str[i] = toLower(str[i]); // If it is a Capital letter, we call the toLower() function we implememted to convert a Capital letter to lowercase letter.
            cout << str[i]; // We output the converted lowercase character
        }
        else {
            cout << str[i]; // If it is not a Capital letter, it will simply print out the character the way it is
        }
    }
    cout << endl; // we create a new line after all our characters are printed out!
    
    // This is how you would write the same thing using a while loop
    int cnt = 0; // We need the control variable to control when to end our loop
    while (cnt != str.length()) { // the condition of when our loop will end
        if(classifyLetter(str[cnt]) == "a Capital Letter") {
            str[cnt] = toLower(str[cnt]);
            cout << str[cnt];
            cnt++; // we update our control variable
        }
        else {
            cout << str[cnt];
            cnt++;
        }
    }
    cout << endl;
}
