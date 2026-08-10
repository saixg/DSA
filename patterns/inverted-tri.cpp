#include <iostream>
using namespace std;

class Solution {
public:
    // Function to print inverted right-angled triangle pattern
    void pattern5(int n) {
        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }
        for (int i = n; i >= 1; i--) {       // Start from n stars down to 1
            for (int j = 1; j <= i; j++) {   // Print i stars
                cout << "*";
            }
            cout << endl; // Move to next line
        }
    }
};

int main() {
    int n;
    cout << "Enter number of rows: ";
    if (!(cin >> n)) { // Input validation
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    Solution obj;
    obj.pattern5(n);

    return 0;
}
