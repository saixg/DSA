#include <iostream> // Required for std::cout, std::cin
using namespace std;

class Solution {
public:
    // Function to print the pattern
    void pattern6(int n) {
        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a positive integer: ";

    // Input validation
    if (!(cin >> n)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    Solution obj;
    obj.pattern6(n);

    return 0;
}  
