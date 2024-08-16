#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    int sum =0,crime=0;
    for(int k=0; k<n; k++) {
        cin>>a;
        if(a>0) sum=sum+a;
        else if(sum>0) sum--;
        else crime++;



   }
   cout<<crime;
   }
