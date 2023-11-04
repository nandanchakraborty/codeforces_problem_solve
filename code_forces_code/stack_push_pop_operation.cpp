#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int>stk;
    int num=0;
    cout<<"insert 5 element to the stack :";

    for(int i=0; i<5; i++) {
        cin>>num;
        stk.push(num);
    }
    stk.pop();
    stk.pop();
    cout<<endl<<"after push and pop operation  :";
    while(!stk.empty()) {
        cout<<stk.top()<<" ";
        stk.pop();

    }




}
