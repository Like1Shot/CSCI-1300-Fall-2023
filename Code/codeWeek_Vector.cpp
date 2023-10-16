#include <iostream>
#include <limits>
#include <vector>
#include <cassert>

using namespace std;

void modifyVector(vector<int> values);  // prototype

    // Remember how we could not add more elements to an array :(
    // The size of the array must be known when the program is compiled
    // We can have a large array and partially fill it to address this problem.
    // But what if we still need more? the user might want to input more than you allocated!

    // Vectors will come in handy!
int main()
{
    vector<int> intVec;                          // empty vector
    // vector<int> intVec();                     // Cant do this!
    vector<double> doubleVec(3);                 // vector of size 3 --> initialized to 0
    vector<string> stringVec = {"CSCI", "1300"}; // initialized string vector

    // for (int i=0; i < 5; i++) {
    //     cin >> input;
    //     intVec.push_back(input);
    // }
    // cin.ignore(1000, '\n');

    int input;
    vector<int> values;
    while(cin >> input) {
        values.push_back(input);
        cin.clear();
    }
    cin.ignore(1000, '\n');

    // .size()
    // access element with []
    // access element with .at(i);
    for (int i=0; i < values.size(); i++) {
        cout << "Accessing with square brackets    values[]: " << values[i] << endl;
        cout << "Accessing with member function values.at(): " << values.at(i) << endl << endl;
    }
    vector<int> valuesKeep = values;
    // pop_back();
    // back();
    cout << "the last element of the vector values: " << values.back() << " ";  // cout the last element of values vector.
    cout << endl << endl;
    values.pop_back();             // remove the last element of the vector

    for (int i=0; i < valuesKeep.size(); i++) {
        cout << valuesKeep.at(i) << " ";
    }
    cout << endl << endl;

    modifyVector(values); // this function push_backs a 1
    for (int i=0; i<values.size(); i++) {
        cout << values[i] << " ";   // But, vectors are passed by value! So no change!
    }
    cout << endl;

    return 0;
}
void modifyVector(vector<int> values) {
    values.push_back(1);
}
