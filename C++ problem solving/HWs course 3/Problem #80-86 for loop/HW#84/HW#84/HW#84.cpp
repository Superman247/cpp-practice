#include <iostream>
using namespace std;

// Function prototype for factorial calculation
int calculateFactorial(int x);

int main() {
    cout << "Please enter a number to find its factorial: ";
    int x;
    cin >> x;

    if (x <= 0) {
        cout << "Please enter a number greater than 0." << endl;
    }
    else {
        int factorial = calculateFactorial(x);
        cout << "The factorial of " << x << " is: " << factorial << endl;
    }

    return 0;
}

// Function to calculate factorial using iterative approach
int calculateFactorial(int x) {
    int factorial = 1;
    for (int i = 1; i <= x; ++i) {
        factorial *= i;
    }
    return factorial;
}
