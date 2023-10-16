#include <iostream>
#include <vector>

using namespace std;
void multiplyArray(double arr[], double factor, int size);
void multiplyVector(vector<double> values, double factor);
vector<double> multiplyVectorReturn(vector<double> values, double factor);
void printArr(double arr[], int size);
void printVector(vector<double> values);

int main(void) 
{
    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<double> values = {1.0, 2.0, 3.0, 4.0, 5.0};

    values.push_back(6.0);  // This will add 6.0 to the top of the stack(at the end of the vector)
    values.pop_back();      // This will remove the element that is on the top of the stack(6.0)
    /*
        .size()
        .at(i) // i is the index value
        .push_back()// adds an element to the back of the vector(top of the stack)
        .pop_back() // removes the last element in the vector
        .front()    // returns the first element 
        .back()     // returns the last element
        .empty()    // will return true if the vector is empty
    */
    multiplyArray(arr, 3, 5);
    printArr(arr, 5);
    multiplyVector(values, 3);
    printVector(values);
    vector<double> new_vec = multiplyVectorReturn(values, 3);
    printVector(new_vec);

    // 
    vector<string> strVec = {"CSCI", "1300"};
    strVec.push_back("Is Fun!");
    cout << strVec.at(2).at(6) << endl;     // .at() has bound checking! See what happens when you access index 7
    cout << strVec.at(2)[7] << endl;        // When you access an element that is out of bounds with [], it doesnt inform you that you are out of bounds
    // Due to the bound checking of .at(), [] is faster. But the programmer(YOU) must be certain of the validity of the index values!

    return 0;
}
// Arrays are passed by reference! --> the function receives is a "pointer" to the first element of the array.
void multiplyArray(double arr[], double factor, int size) {
    for (int i=0; i<size; i++) {
        arr[i] = arr[i] * factor;
    }
}
// Vectors are passed by value! Therefor, the values vector will keep its' original value!
// The modification is local to this function only!
void multiplyVector(vector<double> values, double factor) {
    for (int i=0; i<values.size(); i++) {
        values[i] = values[i] * factor;
    }
}
// To modify the original vector in a function, you must return a new vector with the modified value.
// Of course, as mentioned during lecture... there is a way to pass by reference! --> &
// But we will NOT use such things in our course. So when you need to modify the original, make a vector function!
vector<double> multiplyVectorReturn(vector<double> values, double factor) {
    vector<double> new_vec;
    for (int i=0; i<values.size(); i++) {
        new_vec.push_back(values[i] * factor);
    }
    return new_vec;
}

void printArr(double arr[], int size) {
    cout << "The    \"arr\"  array is: ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printVector(vector<double> values) {
    cout << "The \"values\" vector is: ";
    for (int i=0; i<values.size(); i++) {
        cout << values.at(i) << " ";
    }
    cout << endl;
}