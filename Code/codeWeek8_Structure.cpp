#include <iostream>

using namespace std;
/* ===== Structure ===== */
// Collection of related data items(can be different types!)
// Lets define a structure!
struct StreetAddress {  // a street address is a combination of numbers and strings
    int house_number;
    string street_name;
    int zip;
    // You can have arrays and vectors as well!
};
// A Nested Struct!
struct Person {
    string name;
    StreetAddress home_address; // This is nested!
};
void printAddress(StreetAddress address);
StreetAddress makeRandomAddress();
int main(void)
{
    // Creating an instance of the StreetAddress structure
    StreetAddress my_house; // The datatype is: StreetAddress and the variable name is: my_house
    my_house.house_number = 999;
    my_house.street_name = "CSCI 1300th ST";
    my_house.zip = 80001;

    // Same as {"Chanheum Park", {999, "CSCI 1300th ST", 80001}}
    Person me = {"Chanheum Park", my_house};

    StreetAddress destination;
    destination = my_house; // You can use the = operator to assign a structure to another!
    // Then, all members of the sturcture will be assigned.

    // So, you dont need to do the following:
    destination.house_number = 999;
    destination.street_name = "CSCI 1300th ST";
    destination.zip = 80001;

    // But, You CANNOT compare two structures for equality
    // Comment out the if statement bellow to compile (Select the lines and press (ctrl /) or (cmnd /))
    // if(destination == my_house) {
    //     cout << "Destination Found!" << endl;
    // }
    if (destination.house_number == my_house.house_number 
        && destination.street_name == my_house.street_name
        && destination.zip == my_house.zip) {
        cout << "Destination Found!" << endl;
    }
    // You can initialize a struct appond creating the instance!
    StreetAddress your_house = {1000, "CSCI 1300th ST", 80001};
    

    srand(time(0)); // I am seeding the rand function which we will use in makeRandomAddress()
    // This is to initialize the randome number generator with the current time as the seed.

    // Calling our functions
    printAddress(my_house);  // pass in the struct to print the address
    printAddress(your_house);
    StreetAddress random_house = makeRandomAddress();  // assign the returned random struct
    printAddress(random_house);

    // An array of structs!
    StreetAddress delivery_route[3] = {my_house, your_house, random_house};

    return 0;
}
void printAddress(StreetAddress address) {
    cout << "============ Address ============" << endl;
    cout << address.street_name << ", Unit# " << address.house_number
        << ", " << address.zip << endl;
}
StreetAddress makeRandomAddress() {
    StreetAddress result;
    result.house_number = rand() % 1000;
    result.street_name = "CSCI 1300th ST";
    result.zip = 80001;

    return result;
}
