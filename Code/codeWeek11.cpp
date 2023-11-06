#include <iostream>
#include <fstream>
#include <sstream>

#include "Pokemon.h"

using namespace std;
void poisonPokemon(vector<Pokemon> &pokemons, int index);
void poisonPokemonArr(Pokemon pokemons[], int i);
int main(void)
{
    vector<Pokemon> my_party;
    Pokemon pokemon = Pokemon(); // using Default Constructor to create a Pokemon object
    my_party.push_back(pokemon);
    my_party.at(0).setId(25);
    my_party.at(0).setName("Pikachu");
    my_party.at(0).setHp(35);
    my_party.at(0).setAttack(55);
    my_party.at(0).setId(30);
    my_party.at(0).setId(90);

    Pokemon my_party_arr[6];
    my_party_arr[0] = Pokemon(25,"Pikachu",35,55,30,90);

    int i=1;
    ifstream fin("wildPokemonList.txt");
    if (fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            stringstream ss(line);
            int id, hp, attack, defense, speed; string name;
            ss >> id >> name >> hp >> attack >> defense >> speed;
            // Use the parameterized constructor!
            pokemon = Pokemon(id, name, hp, attack, defense, speed);
            my_party.push_back(pokemon); // Populate the my_party vector
            my_party_arr[i] = pokemon;   // Populate the my_party_arr array
            i++;
        }
        fin.close();
    }
    else {
        cout << "Unable to open the file." << endl;
    }
    cout << "/////////// VECTORS //////////// \n";
    poisonPokemon(my_party, 0);
    poisonPokemon(my_party, 0);
    poisonPokemon(my_party, 0);
    cout << "Status in main function" << endl;
    my_party.at(0).printPokemon(); // Print Pikachu in main

    cout << "\n\n\n\n/////////// ARRAYS ///////////// \n";
    poisonPokemonArr(my_party_arr, 0);
    cout << "Status in main function" << endl;
    my_party_arr[0].printPokemon(); // Print Pikachu in main

    return 0;
}
void poisonPokemon(vector<Pokemon> &pokemons, int i) {
    cout << "====== Current Status ===== " << endl;
    pokemons.at(i).printPokemon();
    pokemons.at(i).takeDamage(15);
    cout << "Your party is affected by poison!" << endl;
    cout << "====== Post Status ===== " << endl;
    pokemons.at(i).printPokemon(); cout << endl;
    if(pokemons.at(i).isFainted()) {
        cout << pokemons.at(i).getName() << " fainted!" << endl;
    }
}
void poisonPokemonArr(Pokemon pokemons[], int i) {
    cout << "====== Current Status ===== " << endl;
    pokemons[i].printPokemon();
    pokemons[i].takeDamage(15);
    cout << "Your party is affected by poison!\n" << endl;
    cout << "====== Post Status ===== " << endl;
    pokemons[i].printPokemon(); cout << endl;
    if(pokemons[i].isFainted()) {
        cout << pokemons[i].getName() << " fainted!\n\n" << endl;
    }
}
