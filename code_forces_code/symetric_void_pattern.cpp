#include<iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    for(i=0; i<n; i++) {
        for(int j=n; j>i; j--) {
            cout<<"*";
        }
        for(int k=0; k<2*i; k++) {
            cout<<" ";
        }
        for(int j=n; j>i; j--) {
            cout<<"*";
        }
        cout<<endl;

    }
    for(i=n; i>=1; i--) {
        for(int j=n; j>=i; j--) {
            cout<<"*";
        }
        for(int k=0; k<2*i-2; k++) {
            cout<<" ";
        }
        for(int j=n; j>=i; j--) {
            cout<<"*";
        }
        cout<<endl;

    }




}
