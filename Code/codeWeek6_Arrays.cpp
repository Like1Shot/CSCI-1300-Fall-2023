#include <iostream>
#include <string>
#include <cassert>
double getAverage(int arr[], int size);
double getLargest(int arr[], int size);
using namespace std;
int main(void)
{
    int size;
    cout << "Enter a size for your arrays: ";
    cin >> size;

    int zeros[size];    // size must be defined before!
    for (int i=0; i<size; i++) {
        zeros[i] = 0;
    }

    int square[size];
    for (int i=0; i<size; i++) {
        square[i] = i * i;
    }
    
    int squares[] = {0, 1, 4, 9, 15};  // You dont need to provide the size if you initialize it! 
    int lucky_numbers[5];              // You are defining an array of size 5 but dont know the elements yet!
    for (int i=0; i<size; i++) {
        lucky_numbers[i] = squares[i];
    }

    double total = 0;
    for (int i=0; i<size; i++) {
        total = total + squares[i];
    }
    double average  = (double)total / size; // squares is declared as an integer above. Typecast to double for average!

    int values[size];
    cout << "Enter an array of size: " << size << endl;
    for (int i=0; i<size; i++) {
        cin >> values[i];
    }
    
    int largest = values[0];        // We initialize the largest value as the first element! (why?)
    for (int i=1; i<size; i++) {    // Notice that we iterate from the second element!
        if (values[i] > largest) {  // If the currently indexed element is larger than our number stored in 'largest'
            largest = values[i];    // We update our value in 'largest' 
        }
    }
    // Arrays are passed by reference!!
    cout << "The average of the \"square\" array is: " << getAverage(squares, size) << endl;
    cout << "The largest value within the \"values\" array is: " << getLargest(values, size) << endl;

    return 0;
}
double getAverage(int arr[], int size) {    // Arrays are passed by reference!!
    assert(size > 0);  // covers for invalid inputs. size of array must b non-negative!
    int total = 0;
    for (int i=0; i<size; i++) {
        total = total + arr[i];
    }
    double average  = (double)total / size;

    return average;
}
double getLargest(int arr[], int size) {    // Arrays are passed by reference!!
    assert(size > 0);

    int largest = arr[0];           
    for (int i=1; i<size; i++) {    
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
