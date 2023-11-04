#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x <= n) {
            cout << "YES" << endl;
        } else if (k == 1 || k == n) {
            cout << (x == k ? "YES" : "NO") << endl;
        } else {
            long long min_sum = (k * (k - 1)) / 2;
            long long max_sum = (2 * n - k + 1) * k / 2;

            if (x >= min_sum && x <= max_sum) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
