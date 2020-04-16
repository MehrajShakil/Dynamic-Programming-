
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
string ans;
string a,b;
int lena,lenb, dp[3005][3005];

int LCS(){
    string ans;
    for(int i=1;i<=lena;i++){
        for(int j=1;j<=lenb;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(a[i]==b[j]){
                dp[i][j] =max(dp[i][j],dp[i-1][j-1]+1);
            }
        }
    }
    int i=lena, j=lenb;
    while(i && j){
        if(dp[i][j]==dp[i-1][j]){
            i--;
        }
        else if(dp[i][j]==dp[i][j-1]){
            j--;
        }
        else{
            ans+=a[i];
            i--;
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return dp[lena][lenb];
}

/// main function.
int main()
{
    memset(dp,0,sizeof(dp));
    cin>>a>>b;
    lena=a.length();
    lenb=b.length();
    a=" "+a;
    b=" "+b;
    int lcs= LCS();
    cout<<endl<<lcs;
}
