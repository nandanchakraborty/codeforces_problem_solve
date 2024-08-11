#include<bits/stdc++.h>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.

    //for buy
    long long minimum=9999999;
    int i;
    for( i=0;i<prices.size();i++){
        if(minimum>prices[i])
        minimum = i;


    }
    cout<<"mini"<<prices[minimum]<<endl;
    int n=prices.size();

    if(minimum!=n-1){
        long long lar=0;
        for( i=minimum+1;i<n;i++){
            if(prices[i]>lar){
                lar=i;

            }

        }
            cout<<"lar"<<prices[lar]<<endl;

        return prices[lar]-prices[minimum];


    }
    else return 0;

}
int main(){

int n;
cin>>n;
vector<int> prices(n);
for(int i=0;i<n;i++)
{
int a;
cin>>a;
prices.push_back(a);
}

cout<<"best price "<<bestTimeToBuyAndSellStock(prices);
}
