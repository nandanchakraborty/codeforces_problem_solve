
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

 long long  int ar[t];
 for(int i=0;i<t;i++){
 cin>>ar[i];
 }
   long long int sum=0,max_sum=ar[0];
   for(int i=0;i<t;i++){
         sum= sum+ar[i];

   if(sum>max_sum){
      max_sum=sum;

      }
   if(sum<0)
      sum=0;

   }
   cout<<max_sum;
   }
