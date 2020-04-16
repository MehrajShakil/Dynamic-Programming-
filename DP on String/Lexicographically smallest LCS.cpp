
// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

// █▀█─█──█──█▀█─█─█
// █▄█─█──█──█▄█─█▄█
// █─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN = 105;
string A,B,dp[105][105];
void solve(int m,int n)
{
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0||j==0)
                dp[i][j]="";
            else if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1]+A[i-1];
            else if(dp[i-1][j].size()>dp[i][j-1].size())
                dp[i][j]=dp[i-1][j];
            else if(dp[i-1][j].size()<dp[i][j-1].size())
                dp[i][j]=dp[i][j-1];
            else if(dp[i-1][j]<dp[i][j-1])
                dp[i][j]=dp[i-1][j]; // Change the sign < to > and get Lexicographical largest LCS .
            else
                dp[i][j]=dp[i][j-1];
            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }
    if(dp[m][n].size()==0)
        cout << " No solution " << endl ;
    else
        cout << dp[m][n] << endl ;
}

/// main function.
int main()
{
    cin >> A >> B ;
    solve(A.size(),B.size());
    return 0;
}
/// Alhamdulillah
/// Reference rajonaust(github) vai.
