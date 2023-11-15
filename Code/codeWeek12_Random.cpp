#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    for (int i = 0; i < 5; ++i) {
        int random_number = rand();
        cout << "Random Number: " << random_number << endl;
    }

    for (int i = 0; i < 5; ++i) {
        int random_number = rand()%200 + 500; // Use basic arithmetics to change the range of your random numbers
        cout << "Random Number: " << random_number << endl;
    }

    return 0;
}
