#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the minimum number of cuts needed to get at least n slices of pizza
int minCuts(int n) {
    // Find the smallest power of 2 that is greater than or equal to n
    int slices = pow(2, ceil(log2(n)));
    return slices / 2;
}

int main() {
    // Input number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    for (int i = 0; i < t; ++i) {
        // Input number of students for this test case
        int n;
        cin >> n;
        // Calculate and print the minimum number of cuts needed
        cout << minCuts(n) << endl;
    }

    return 0;
}
