#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;

    int ar[n];
    for(int i=0; i<n; i++) {
        ar[i] = s[i];

    }

    for(int i=0; i<k; i++) {
        for(int j=0; j<n; j++) {
            if(ar[j] == 'B' && ar[j+1] == 'G')
            {
            swap(ar[j],ar[j+1]);
            j++;
            }

            }


    }
     for(int i=0;i<n;i++){
            s[i]= ar[i];
            cout<<s[i];

            }


}
