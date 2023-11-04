#include<iostream>
using namespace std;



int main() {
    int p;
    cin>>p;
    while(p--) {

        long long int n;
    cin>>n;
    if (n < 7 || n == 9) {
            cout << "NO" << "\n";
        continue;
        }
        cout << "YES\n";
        if (n % 3 == 0) {
            cout << "1 4 " << n - 5 << "\n";
        } else if (n % 3 == 1) {
            cout << "1 2 " << n - 3 << "\n";
        } else {
            cout << "1 2 " << n - 3 << "\n";
        }

    }


}
