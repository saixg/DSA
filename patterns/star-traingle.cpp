#include <iostream> // Required for std::cout, std::cin
using namespace std;

class Solution {
public:
    // Function to print the pattern
    void pattern2(int n) {
        if (n <= 0) { // Handle invalid or zero input
            cout << "Please enter a positive integer.\n";
            return;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter the number of rows: ";
    if (!(cin >> n)) { // Input validation
        cout << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    obj.pattern2(n);
    return 0;
}
