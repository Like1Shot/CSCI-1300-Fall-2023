#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>
int rowTotal(int table[8][3], int row);
int colTotal(int table[8][3], int row);
void runTest(int table[8][3]);

using namespace std;
int main()
{
    const int COUNTRIES = 8;
    const int MEDALS = 3;

    int counts[COUNTRIES][MEDALS] = {
        {0, 3, 0},
        {0, 0, 1},
        {0, 0, 1},
        {1, 0, 0},
        {0, 0, 1},
        {3, 1, 1},
        {0, 1, 0},
        {1, 0, 1}
    };
    for (int i=0; i<COUNTRIES; i++) {
        for (int j = 0; j < MEDALS; j++) {
	        cout << setw(4) << counts[i][j];
        }
        cout << endl;
    }
    runTest(counts);


    return 0;
}
int rowTotal(int table[][3], int row) {
    int total = 0;
    for (int j=0; j<3; j++) {
        total = total + table[row][j];  // total += table[row][j];
    }

    return total;
}
int colTotal(int table[][3], int col) {
    int total = 0;
    for (int i=0; i<8; i++) {
        total = total + table[i][col];
    }

    return total;
}
void runTest(int table[][3]) {
    assert(colTotal(table, 2) == 5);
    assert(rowTotal(table, 5) == 5);
}
