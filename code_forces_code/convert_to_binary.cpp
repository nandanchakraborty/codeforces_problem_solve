#include<bits/stdc++.h>
using namespace std;
int con_2_decimal(string s) {
    int p =s.size();
    int res =0;
    int p2=1;
    for(int i=p-1; i>=0; i--) {
         if(s[i]=='1')
         {
         res=res+p2;
         }
         p2=p2*2;


    }
    return res;




}
string conv_to_binary(int n) {
    string res=" ";
    while(n!=1) {
        n=n/2;

        if(n%2==1) res+='1';
        else res+='0';





    }

    reverse(res.begin(),res.end());

    return res;

}

int main() {
    string  n;
    cin>>n;
    //cout<<"binary of  "<<n<<" is :"<<conv_to_binary(n);
    cout<<"decimal  of  "<<n<<" is :"<<con_2_decimal(n);

}
