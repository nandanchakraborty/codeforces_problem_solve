#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

int cnt=0;
for(int i=0;i<=a;i++){
for(int j=0;j<=b;j++){
if((i*i+j==a) && (i+j*j == b))
{
cnt++;
}


}

}
cout<<cnt;



}
