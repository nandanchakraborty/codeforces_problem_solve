#include<iostream>
using namespace std;
int main() {
    string s;
    string p;
    cin>>s;
    cin>>p;
    int sl=s.length();
    int pl=p.length();
    int cnt=0;
    int i=0,j=0;
    for(int j=0;j<pl;j++){
    if(s[i] == p[j]){
    cnt++;
    i++;
    }


    }
    cout<<cnt+1;

}
