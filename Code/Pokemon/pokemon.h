/*
The header file (.h file extension) for the pokemon game
Header files are used to declare a class (sometimes more than one class too) along with it's attributes and it's method prototypes
We only define prototypes inside of a class here in it's public section
*/

// Header guards
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

using namespace std;

// The class definition for the Pokemon
// Consists of data attributes, and it's publicly available functions (also called as methods)
class Pokemon {
    
    // Private section of the class
    // These are not directly accessbile by objects of this class - and they are hidden from the outside world
    private:
        int id_; // the convention is to put an underscore before or after the name of a variable (to indicate that they are held private)
        string name_;
        int hp_;
        int attack_;
        int defense_;
        int speed_;
        string type_;
        
    public:
        // ----------------- Section for constructors for the class ----------------------------------

        // This is a prototype for a default constructor
        // Note that there is no return type (not even void!) and the name of the function is same as that of the class
        Pokemon();

        // This is a prototype for a parameterized constructor
        Pokemon(string name, int id);


        // ----------------- Section for getters and setters for the class ----------------------------

        // Prototypes for getters (accessors) of the class
        // Try to think why the return types are what they are
        int getId() const; // getters have const because they generally don't modify any attributes - so const is a good practice to add
        string getName() const;
        int getHp() const;
        int getAttack() const;
        int getDefense() const;
        int getSpeed() const;
        string getType() const;

        // Prototypes for setters (mutators) of the class
        // Try to think why the return types are void and they take an input parameter here
        void setId(int id);
        void setName(string name);
        void setHp(int hp);
        void setAttack(int attack);
        void setDefense(int defense);
        void setSpeed(int speed);
        void setType(string type);
};

#endif
