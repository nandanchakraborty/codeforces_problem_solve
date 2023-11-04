#include<iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] =='1') sum = sum+a;
        else if(s[i] =='2') sum = sum+b;
        else if(s[i] =='3') sum = sum+c;
        else  sum = sum+d;




    }
    cout<<sum<<endl;




}
