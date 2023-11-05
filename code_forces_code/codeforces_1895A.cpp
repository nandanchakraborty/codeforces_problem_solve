#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
int x,y,n;
while(t--){
cin>>x>>y>>n;
    if (x >= y) cout << x <<endl;
    else {
        if (y - x <= n) cout << y <<endl;
        else cout << y + (y - x - n) <<endl;
    }
}


}
