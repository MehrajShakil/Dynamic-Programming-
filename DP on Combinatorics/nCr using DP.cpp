#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN=10000;
ll dp[MAXN][MAXN];

ll nCr(ll n,ll r)
{

    if(dp[n][r]==-1)
    {
        if(n==r || r==0)
        {
            dp[n][r]=1;
        }
        else if(r==1)
        {
            dp[n][r]=n;
        }
        else
        {
            dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
        }
    }

    return dp[n][r];
}

void init(ll n,ll r)
{
    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=r; j++)
        {
            dp[i][j]=-1;
        }
    }

}

int main()
{
    ll n,r;
    cin>>n>>r;
    init(n,r);
    cout<<nCr(n,r);



}
