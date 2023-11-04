#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cin>>n;
string s;
cin>>s;

int p=0;
for(int i=0;i<n-3+1;i=i+3){
if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] =='x')
{
p++;
}

}
cout<<p;





}
