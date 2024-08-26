#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n=s.size();
        int a=n-1;
        int b=n-2;
        if(s[b]=='c'&&s[a]=='h'||s[a]=='x' || s[a]== 's' || s[a]== 'o'){
        cout<<s<<"es"<<endl;


        }
        else if(s[b]=='f'&&s[a]=='e'){

        for(int i=0;i<b;i++){
        cout<<s[i];

        }
        cout<<"ves"<<endl;



    }
    else if(s[a]=='f'){

        for(int i=0;i<a;i++){
        cout<<s[i];
        }
        cout<<"ves"<<endl;


    }

    else if(s[a]=='y'){

    for(int i=0;i<a;i++){
        cout<<s[i];
        }

        cout<<"ies"<<endl;

    }
    else cout<<s<<"s"<<endl;



}
}
