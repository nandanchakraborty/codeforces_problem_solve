#include<iostream>
using namespace std;
int main() {
    long long int n,m;
    cin>>n>>m;
   int   s[3];

        int cnt=0;
    while(n--) {
      for(int i=0;i<=2;i++)
      cin>>s[i];
        if(s[0] == '+') {
            m = m+(s[2] - 48);

        } else if(s[0] == '-' && m>(s[2]-48)) {
            m = m- (s[2] -48);

        } else cnt++;



    }

    cout<<m;
    cout<<" "<<cnt<<endl;







}
