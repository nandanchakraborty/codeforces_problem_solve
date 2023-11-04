#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void solve() {
   long long int n;
   cin>>n;
   int i=1;
   while(i * 10 <= n) {
            i *= 10;
        }
        cout << n - i << endl;
}



int main() {
    int n;
    cin>>n;
    while(n--) {
        solve();

    }


}
