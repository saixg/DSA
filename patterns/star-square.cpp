#include <iostream> // Required for std::cout, std::cin
using namespace std;

class Solution {
public:
    // Function to print an n x n square of '*'
    void pattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the pattern (positive integer): ";

    // Input validation
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Exit with error
    }

    Solution obj;
    obj.pattern1(n);

    return 0; // Successful execution
}
