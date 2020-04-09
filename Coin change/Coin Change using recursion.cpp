#include<bits/stdc++.h>
using namespace std;

using ll =long long;
const ll MAXN = 10000;

ll coin[MAXN];
ll make; /// our target taka.
ll dp[MAXN][MAXN];
ll n; /// number of coin.

ll coin_change(ll i, ll amount)
{

    if(i>=n) /// all coin have been taken
    {
        //cout<<"Final "<<i<<" "<<amount<<endl;
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)  /// no need to same state twice
    {
        // cout<<" return from dp " <<i<<" "<<amount<<endl;
        return dp[i][amount];
    }
    ll ret1= 0, ret2 = 0;

    if(amount-coin[i]>=0)
    {
        //cout<<" i'm start inner " <<i<<" "<<amount<<endl;
        ret1 = coin_change(i,amount-coin[i]); /// try to take coin i
    }
    //cout<<" i'm start outter " <<i<<" "<<amount<<endl;
    ret2 = coin_change(i+1,amount);

    //cout<<"compute "<<i<<" "<<amount<<" "<<ret1<<" "<<ret2<<endl;
    return dp[i][amount] = ret1|ret2;

}

void init(ll n)
{
    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=n; j++)
        {
            dp[i][j]=-1;
        }
    }

}
int main()
{
    cin>>n>>make;
    for(ll i=0; i<n; i++)
        cin>>coin[i];

    init(make);

    cout<<coin_change(0,make);


}
