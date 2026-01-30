#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";

    if (!(cin >> number)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 0;
    }

    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}
