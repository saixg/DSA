#include <iostream>
using namespace std;

class Solution {
public:
    // Function to print the pattern
    void pattern3(int n) {
        if (n <= 0) { // Edge case: non-positive input
            cout << "Please enter a positive integer." << endl;
            return;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j; // Print numbers from 1 to i
            }
            cout << endl; // Move to next line
        }
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter the number of rows: ";
    if (!(cin >> n)) { // Input validation
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    obj.pattern3(n);
    return 0;
}
;