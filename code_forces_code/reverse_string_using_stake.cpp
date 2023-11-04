#include<bits/stdc++.h>
using namespace std;
void solve(string &s) {
    stack<char>st;
    for(auto it:s) st.push(it);
    s.clear();
    while(!st.empty()) {
        cout<<st.top();
        st.pop();
    }



}
int main() {
    string s;
    cin>>s;
    solve(s);


}
