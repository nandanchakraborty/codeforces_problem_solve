//nandanchakraborty
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    set<int>s;
    for(int i=0;i<n;i++){
         cin>>a;
         s.insert(a);

    }
    cout<<s.size()<<endl;
     for (auto i:s) {
        // Printing the element at
        // index 'i' of vector
        cout << i <<" ";
    }



}
