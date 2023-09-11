#include <iostream>
using namespace std;

int main()
{
/*
    // Error #1: don't put a semicolon after the if statement
    int cheerios, miniWheats;
    cheerios = 150;
    miniWheats = 75;
    // the ; below will generate a warning, but not an error. 
    // The cout statement will always print. This is because the ; is an "empty statement" and it 
    // effectively ends the if statement. The cout statement becomes part of "the rest of the program"
    if (cheerios < miniWheats); 
    {
        cout << "Go Mini Wheats!" << endl;
        cin >> cheerios;
        // 1 statement inside your if body
    }

    // Part 2: if you put a semicolon after the if condition, but you have an else, you WILL get an error
    // because with the if statement effectively ended, you will have an  else without an if
    // also known as dangling-else problem
    if (cheerios < miniWheats)
    {
        cout << "Go Mini Wheats!" << endl;
    }
    else // notice error here
    {
        cout << "Go Cheerios!" << endl;
    }
    
    // Error #2: don't put a semicolon after the else
    // Same: the ; statement, an empty  statement, will become the else block, and it ends the else

    
    // Error #3: don't put the condition again after else (nor the inverse of the condition)
    if (cheerios < miniWheats) 
    {
        cout << "Go Mini Wheats!" << endl;
    }
    else (cheerios >= miniWheats) // condition is not needed. The else is ALWAYS ALONE!
    {
        cout << "Go Cheerios!" << endl;
    }

    // Error #4: confusing = and ==
    // cheerios = 5 evaluates to 5
    // cheerios = 17 evaluates to 17
    // any numerical value other than 0 will evaluate  to True
    cheerios = 50;
    miniWheats = 70;
    if (cheerios = 70) // BE AWARE: this will give you a warning, but not an error!
    // cheerios has been assigned a non-zero value! Therefore the condition evaluates as true.
    // What will happen if you assign cheerios = 0
    {
        cout << "Hooray! They have the same value" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }
    
    // Error #5: inadvertently using statements that do not evaluate to true or false as conditions
    // if (cheerios)
    // if (5)
    // if ("yes")
    // if (cheerios/5) 
    // all the examples above will evaluate to something other than 0, so will run as True!
    cheerios = 50;
    miniWheats = 70;
    if (cheerios) // BE AWARE: this will give you a warning, but not an error!
    {
        cout << "Hooray! They have the same value" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }

    // Error #6: don't forget to use the {} for each if or else block, even if there is only one statement in each block

    // if the if block has only one statement, the { } are not needed. 
    // But use them anyway! It's good practice! It will save  you many headaches later. It also helps you see
    // the different levels in your nested branches
    if (cheerios < miniWheats) 
        cout << "Go Mini Wheats!" << endl;


    // Error #7: you can't have an else without an if
    // See the example on lines 20-27

    // Error #8: validating user input - if the input value must meet certain conditions to be valid, 
    // then to spot the user error you need to check for the INVERSE of the given conditions
    // Example: the user needs to enter a value between 5 and 10
    // This means the value needs to be >=5 AND also <=10
    // To check for user error we need to check if the user entered a value "not between 5 and 10"
    // This is equivalent to saying: did the user entered a value (lower than 5) OR (higher than 10)? 

    // Error #9: always check if any value(s) can turn the condition true (or false). 
    // Particularly useful for variables that are allowed to have a range of values
    // && ||

    // Error #10: forgetting to use "break;" in the switch statement case. The case will "fall through"
    // Remember: break tells the machine to skip down to the end of the switch statement, because a match was found 
*/

// We have learned if, else-if, else which is versatile when it comes checking a wide range of conditions
// We have learned to use relational operators: (== != < > <= >=) along with logical operators: (&& ! ||)
// But sometimes we only need to check the equality of an expression againts a set of values.

// Here, the Switch Case is introduced!
// We will change the following if, else if, else code block to a switch case.

// Lets have a program that takes a number representing a day of the week and prints the name of that day.
    int day = 0;
    cout << "Enter a number (1-7) representing a day of the week: ";
    cin >> day;

    if (day == 1) {
        cout << "Monday" << endl;
    }
    else if (day == 2) {
        cout << "Tuesday" << endl;
    }
    else if (day == 3) {
        cout << "Wednesday" << endl;
    }
    else if (day == 4) {
        cout << "Thursday" << endl;
    }
    else if (day == 5) {
        cout << "Friday" << endl;
    }
    else if (day == 6) {
        cout << "Saturday" << endl;
    }
    else if (day == 7) {
        cout << "Sunday" << endl;
    }
    else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break; // We use "break" to exit the switch block once executed.
            // If you dont have "break", it will not exit the switch block --> Fall-Through problem
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Enter a number between 1 and 7. " << endl;
            // We dont need a break here because the 'defualt' is the 'catch-all' case.
            // Meaning that, it will automatically exit the switch block once the code 
            // within the defualt block is executed. (You typically dont use break)
    }
      
    return 0;
}
