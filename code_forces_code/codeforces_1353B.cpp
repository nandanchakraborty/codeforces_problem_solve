#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    int ar[n],br[n];
    for(int i=0;i<n;i++){
    cin>>ar[i];
    }
    for(int i=0;i<n;i++){
    cin>>br[i];
    }
    sort(ar,ar+n);
    sort(br,br+n,greater<int>());
    for(int i=0;i<k;i++){
    if(ar[i]<br[i]){

    swap(ar[i],br[i]);
    }
    }

    int sum=0;
    for(int i=0;i<n;i++){
    sum= sum+ar[i];

    }
    cout<<sum<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();

    }


}
