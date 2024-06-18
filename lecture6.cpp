#include<iostream>
using namespace std;

int main() {
    int a, b, comparisonResult;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    // Determine the comparison result
    if(a > b) {
        comparisonResult = 1;
    } else if(a < b) {
        comparisonResult = -1;
    } else {
        comparisonResult = 0;
    }

    // Use switch case to display the result
    switch(comparisonResult) {
        case 1:
            cout << a << " is greater than " << b << endl;
            break;
        case -1:
            cout << a << " is less than " << b << endl;
            break;
        case 0:
            cout << a << " is equal to " << b << endl;
            break;
        default:
            // This case should never be reached
            cout << "Unexpected comparison result" << endl;
    }

    return 0;
}
