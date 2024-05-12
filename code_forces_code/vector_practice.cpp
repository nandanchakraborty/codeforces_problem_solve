#include<bits/stdc++.h>
using namespace std;
void even(vector<int> &v,int n) {
    vector<int>temp;
    for(int i=0; i<n; i++) {
        if(v[i]%2==0) {

            temp.push_back(v[i]);

        }

    }
    int p= temp.size();

    for(int i=0; i<p; i++) {
        cout<<temp[i]<<" ";
    }


}
int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++) {
        int a ;
        cin>>a;
        v.push_back(a);


    }
    even(v,n);
}








