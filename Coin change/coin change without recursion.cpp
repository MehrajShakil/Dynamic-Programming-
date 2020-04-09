#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int coins[5]= {50,25,10,5,1};

int main()
{

    ll n;
    while(cin>>n)
    {
        ll noways[n+1]= {0};
        noways[0]=1;

        for(ll i=0; i<5; i++)
        {
            for(ll j=coins[i],k=0; j<=n; j++,k++)
            {
                noways[j]+=noways[k];
            }
        }
        cout<<noways[n]<<'\n';
    }



}
