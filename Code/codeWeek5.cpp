#include <iostream>
#include <string>

using namespace std;
int main() {
    /* ===== While Loops & For Loops ===== */

    // while (contition)
    int counter = 0;
    while (counter < 5) { // While Loop requires a condition within the parentheses. It will loop if the condition is true.
        cout << "This is a While Loop, iteration number: " << counter+1 << endl;
        counter++; // Post-incrementation of the control variable for our While Loop
    }
    cout << "The While Loop ended and this output is not a part of the loop!" << endl; // Notice that this is outside the While Loop block!


    // for ([initialize control variable]; [condition]; [update control variable])
    for (int i=0; i<5; i++) { // integer type variable i is local to the For Loop
        cout << "This is a For Loop, iteration number: " << i+1 << endl;
    }
    cout << "The For Loop ended and this output is not a part of the loop!" << endl; // Notice that this is outside the For Loop block!


    /* ===== When would you use a While Loop over a For Loop? ===== */
    // Sometimes, you dont know the number of iterations (even in terms of a variable) that you will run the loop.
    // But you know the condition in which the loop will end. Take a look at the following code:
    char option;
    cout << "would you like to (f)ight the dragon, (r)aid the castle, (g)o home?:" << endl;
    cin >> option;

    while(option != 'f' && option != 'r' && option != 'g') { // will loop until 'f' or 'r' or 'g' has been inputed
        cout << "select a valid option" << endl;
        cin >> option;
    }


    // When you know the number of iterations(even in terms of a variable), a for loop is more convenient.
    int input_count = 0;
    cout << "How many times do you want to loop?: ";
    cin >> input_count;

    for(int j=0; j<input_count; j++) {  // It is a common practice to use i, j, k for control variables within the For Loops.
        cout << "For Loop Iteration number: " << j+1 << endl;
    }

    cout << endl;

    // But you can use a while loop to do the same. 
    int k=0;
    while(k < input_count) {
        cout << "While Loop Iteration number: " << k+1 << endl;
        k++;
    }
    cout << endl;

    // infinite loops!

    // READ BEFORE YOU RUN! and DON'T FREAK OUT!
    // Use ctrl + c to terminate(stop) the process <-- just use this for now
    // Use ctrl + z to pause the process

    // while (1){  // Simply providing a non-zero value will make an infinite loop!
    //     cout << "This is a infinite While Loop running forever!" << endl;
    // }

    // for (;;) {
    //     cout << "This is a infinite For Loop running forever!" << endl;
    // }


    /* ===== Using a break statement to stop a loop ===== */
    while (1){
        char opt;
        cout << "(f)ight" << " (h)eal" << " (q)uit" << endl;
        cin >> opt;

        if (opt == 'f') {
            cout << "You chose to fight the monster!" << endl;
            cout << "You dealt 0 dmg!" << endl;
        }
        else if (opt == 'h') {
            cout << "Your units are healed by 10 HP" << endl;
        }
        else if (opt == 'q') {
            cout << "Exiting the game." << endl;
            break;
        }
        else {
            cout << "Invalid option! Choose from the following: " << "(f)ight" << " (h)eal" << " (q)uit" << endl;
        }
    }

    /* ===== GENERAL ADVICE ===== */
    // Consider using a for loop if a loop involves a numeric calculation using a variable that is changed by equal amounts each time through the loop.
    // Maybe you want to go by even numbers incrementing the value by 2, starting from zero
    for (int i=0; i<11; i += 2) {
        cout << "Loop iteration number: " << i+1 << endl;
    }
    // It will not always be suitable but it is often the clearest and easiest loop to use for numeric calculations

    // You can use a While loop for other cases. Consider a while loop when it reuqires a complex condition to run the loop.
    // Go back to line 31, our condition there was: [ Until the user inputs the correct option ]


    // On Wedensday, you will be introduced to a variation of a while loop called a do-while loop. 
    // This will come in handy when you want to guarantee the execution of the loop body at least once regardless of the condition.

    return 0;
}
