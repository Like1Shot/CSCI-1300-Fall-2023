#include <iostream>

using namespace std;

void printPattern(int n, int m) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < m; ++i) {
        cout << "[]";
    }
    cout << endl;
    printPattern(n - 1, m + 1);
}
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int rows = 6;

    printPattern(rows, 0);

    int n;
    cout << "Enter the term for Fibonacci sequence: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}

