#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long a,b,n;
        cin>>a>>b>>n;
        int cou=0;
        while(a<=n&&b<=n){
        if(b<a)b+=a;
        else a+=b;
        cou++;
    }
    cout<<cou<<endl;

    }
    }



