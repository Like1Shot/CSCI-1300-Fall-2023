/*
This is an implementation file which consists of the complete method definitions of our class Pokemon
Notice that in pokemon.h, we don't have the complete method (in public section), we only have their prototypes
In this file, we implement those functions, providing the meaning to the public interface of the class
*/

// include the header file
#include "pokemon.h"

// Implement all the methods of the public interface of Pokemon class
// Notice the use of "Pokemon::" in all the functions below. This is termed as scope resolution operator
// For example, Pokemon::getId() means the getId function we are defining below is part of the Pokemon class

// -------------------------- Constructor implementation ----------------------------------------------
// this is a default constructor
// Constructors are methods (functions) of a class used to initialize the data attributes of the class object
Pokemon::Pokemon() {
    // use this function to set the values of attributes to whatever they need to be!
    name_ = "default_value";
    id_ = 1;   
}

// this is a parameterized constructor (note that there are two input parameters)
Pokemon::Pokemon(string name, int id) {
    // instead of setting the name and id to default values, we set them to whatever was passed to this function
    name_ = name;
    id_ = id;
}


// -------------------------- Getters and Setters implementation --------------------------------------
// Ensure you give the correct definition of the function here -> the return type, the scope resolution, the function name and parameters
int Pokemon::getId() const {
    // All this method needs to do is to return the value of the privately held attribute id_
    // the objects of this class will call this method to fetch the value of the id_ attribute
    return id_;
}

void Pokemon::setId(int id) {
    // All this method needs to do is to set the value of id_ attribute
    // the objects of this class will call this method to set the id_attribute to a given value in it's parameters
    id_ = id;
}

string Pokemon::getName() const {
    return name_;
}

void Pokemon::setName(string name) {
    name_ = name;
}

// Define the other getters and setters below here
