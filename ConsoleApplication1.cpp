#include <iostream>
#include <stdexcept>
using namespace std;

int divideNumbers(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }

    return a / b;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try {
        int result = divideNumbers(a, b);
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
