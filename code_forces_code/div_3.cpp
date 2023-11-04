#include<bits/stdc++.h>
using namespace std;
void solve() {
    int a,b;
    cin>>a>>b;
    int ar[a];
    for(int i=0; i<a; i++) {
        cin>>ar[i];
    }
    int p = 0;


    for(int i=0; i<a; i++) {
        if(ar[i] == b) {
            p++;

        }
    }
    if(p>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
int main() {

    int n;
    cin>>n;
    while(n--) {
        solve();
    }

}
