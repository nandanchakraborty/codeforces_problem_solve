#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;

    while(t--) {
        int a,b;
        cin>>a>>b;
        if(a>b) {

            if(a/b ==1) {
                cout<<(a+1)*(a+1)<<endl;

            } else  if(a/b == 2) cout<<a*a<<endl;

            else cout<<a*a<<endl;
        }



      else if(b>a) {

            if(b/a ==1) {
                cout<<(b+1)*(b+1)<<endl;

            } else  if(b/a == 2) cout<<b*b<<endl;

            else cout<<b*b<<endl;
        } else {
            cout<<(a+b)*(a+b)<<endl;

        }

    }



}
