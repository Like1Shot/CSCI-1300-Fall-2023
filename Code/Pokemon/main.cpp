/*
This is the driver program which consists of the main function
We call this file as a driver program, as it drives the logic starting from the main function 
*/

/*
Compile this file using "g++ -std=c++17 -Wall -Wpedantic -Werror main.cpp pokemon.cpp"
*/

// Include the header file we wrote, but in double quotes (""), and not in angular brackets (<>)
#include "pokemon.h"

int main() {

    // define a class object here
    Pokemon obj1; // This will use the default constructor

    // display the object attributes using it's getters
    cout << obj1.getName() << ": " << obj1.getId() << endl;

    // change the value of attributes for obj1 using it's setter
    obj1.setName("pikachu");
    obj1.setId(25);

    // display the object attributes using it's getters
    cout << obj1.getName() << ": " << obj1.getId() << endl;

    // create another object, but this time use a parameterized constructor
    Pokemon obj2("meowth", 50); // this is creating an object and passing the values that the attributes should have too at the same time

    // display the object attributes using it's getters
    cout << obj2.getName() << ": " << obj2.getId() << endl;
    
    return 0;
}
