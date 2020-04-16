
// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

// █▀█─█──█──█▀█─█─█
// █▄█─█──█──█▄█─█▄█
// █─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN = 1000;
ll dp[MAXN][MAXN];
string ans;

/// Find the length.
ll lcs(string a, string b,ll m, ll n)
{
    if(m>a.size() || n>b.size())
        return 0;
    ll &ret=dp[m][n];
    if(ret!=-1)
        return ret;
    if(a[m-1]==b[n-1])
        return ret = 1+lcs(a,b,m+1,n+1);
    else
        return ret = max(lcs(a,b,m+1,n),lcs(a,b,m,n+1));
}

/// Print solution.
void printlcs(string a, string b, ll m,ll n)
{
    if(m>a.size() || n>b.size())
    {
        cout<<ans<<'\n';
        return;
    }
    else if(a[m-1]==b[n-1]){
         ans+=a[m-1];
         printlcs(a,b,m+1,n+1);
    }
    else{
         if(dp[m+1][n]>dp[m][n+1]){
                printlcs(a,b,m+1,n);
         }
         else{
               printlcs(a,b,m,n+1);
         }
    }
}

/// main function.
int main()
{
    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    cout<<lcs(a,b,1,1)<<'\n';
    printlcs(a,b,1,1);
}
