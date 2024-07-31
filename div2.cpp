
#include <iostream>
using namespace std;

int maxDraws(int p1, int p2, int p3) {
    int totalPoints = p1 + p2 + p3;
    // Check if total points is odd
    if (totalPoints % 2 != 0) return -1;

    // Check if p1 + p2 is greater than p3
    if (p1 + p2 > p3) {
        // Maximum number of draws is the minimum of p1 and p2
        return min(p1, p2);
    } else if (p1 + p2 == p3) {
        // All games are draws
        return (p1 + p2) / 2;
    } else {
        return -1; // Invalid scenario
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        cout << maxDraws(p1, p2, p3) << endl;
    }
    return 0;
}
