#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin>>k;

    while(k--) {
            int n;
            cin>>n;
            int  v[n];
            int t[100];
            int u=0;
            for(int i=0;i<n;i++){
            cin>>v[i];
            }

            for(int i=0;i<n;i++){
            if(v[i]>10)
            {
             int r= v[i]/10;
             int y= v[i]%10;
             t[u]=r;
             t[u+1]=y;
             u=u+1;


            }
            else {
            t[u]= v[i];
            u++;
            }
            }
            bool flag = true;
            for(int i=1;i<size(t);i++){
            if(t[i]<t[i-1]){
            flag = false;
            break;
            }
            else
            continue;

            }

            if(flag == true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }

}

