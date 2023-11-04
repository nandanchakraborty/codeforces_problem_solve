#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++) {
        cin>>ar[i];

    }
    sort(ar,ar+n);
    cout<<ar[n-1] -ar[0]<<endl;
}
int main() {
    int p;
    cin>>p;
    while(p--) {

        solve();
    }


}
