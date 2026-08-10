#include <iostream>
using namespace std;

class Solution {
public:
    // Function to print the pattern
    void pattern4(int n) {
        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i; // print the same number in the row
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of rows: ";
    if (!(cin >> n)) { // input validation
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    Solution obj;
    obj.pattern4(n);

    return 0;
}
