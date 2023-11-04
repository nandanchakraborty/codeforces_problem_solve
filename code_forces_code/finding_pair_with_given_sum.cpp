#include<bits/stdc++.h>
using namespace std;

void solve() {
    cout<<"enter array size :";
    int n;
    cin>>n;
    int ar[n];
    cout<<"enter element :";
    for(int i=0; i<n; i++) {
        cin>>ar[i];
    }
    cout<<"enter the target sum :";
    int sum;
    cin>>sum;
    sort(ar,ar+n);
    int i=0;
    int j=n-1;
    while(i<j) {
        if(ar[i]+ar[j] == sum) {
            cout<<"pair found ("<<ar[i]<<" "<<ar[j]<<")"<<endl;
            i++;
            j--;
        } else if(ar[i]+ar[j]< sum)
            i++;

        else j--;



    }
}
int main() {
    cout<<"enter the number of test cases :";
    int p;
    cin>>p;
    while(p--) {
        solve();
    }



}
