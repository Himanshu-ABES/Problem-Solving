#include <iostream>
using namespace std;

// Function definition to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b; // Declare variables before using them
    cin >> a >> b; // Corrected cin syntax
    cout << sum(a, b) << endl; // Corrected cout syntax
    return 0;
}
