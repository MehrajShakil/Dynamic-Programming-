#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN=10000;
ll dp[MAXN];

ll FIBO(ll n)
{

    if(dp[n]==-1)
    {
        if(n<=1)
            dp[n]= n;
        else
            dp[n] = FIBO(n-1) + FIBO ( n-2);
    }
    return dp[n];
}

void init(ll n)
{
    for(ll i=0; i<=n; i++)
        dp[i]=-1;
}

int main()
{

    ll n;
    cin>>n;
    init(n);
    cout<<"Nth fibonacci number : " <<FIBO(n)<<" "<<'\n';
    for(ll i=0; i<n; i++)
        cout<<dp[i]<<" ";


}
