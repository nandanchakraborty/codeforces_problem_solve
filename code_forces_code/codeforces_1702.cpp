#include<bits/stdc++.h>
using namespace std;
void solve() {
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
  cin>>ar[i];

  sort(ar,ar+n);
  int sum =0;
  for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
  sum = sum+(ar[j]-ar[i]);



  }
  cout<<sum;




}
int main() {
    int p ;
    cin>>p;
    while (p--) {
        solve();
    }


}
