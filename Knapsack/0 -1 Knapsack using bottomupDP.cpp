#include<bits/stdc++.h>
using namespace std;

using ll =long long;
const ll MAXN = 10000;

ll dp[MAXN][MAXN];
ll value[MAXN];
ll weight[MAXN];

ll bottomupDP(ll value[],ll n, ll weight[], ll w)
{
    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=w; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
                continue;
            }
            if((j-weight[i])>=0)
            {
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

void init(ll n, ll w)
{

    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=w; j++)
        {
            dp[i][j]=0;
        }
    }

}

int main()
{

    ll n,w;
    cin>>n>>w;
    for(ll i=1; i<=n; i++)
        cin>>weight[i];
    for(ll i=1; i<=n; i++)
        cin>>value[i];
    init(n,w);

    cout<<bottomupDP(value, n, weight, w)<<'\n';

}
/*

4 10
5 7 4 4
6 14 4 1

*/
