//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Allah amader korona virus theke rokkha korun.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp> //order_of_key return number of elements less than x, find_by_order return index (pointer use kora lgbe)

using namespace std;
using namespace __gnu_pbds;

#define ull    unsigned long long
#define ll    long long
#define ios    ios::sync_with_stdio(0);cin.tie(0);
#define ses   "\n"
#define all(x) (x).begin(), (x).end()
//#define INF   ((int)2e18)
#define ii pair<ll, ll>

string digit="0123456789";
string small="abcdefghijklmnopqrstuvwxyz";
string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

const int N=1e6+5;
const ll M=1e18;

typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<ll, ll>,null_type,less<pair<ll, ll>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

struct Edge
{
    int u, vv;
    bool operator<(Edge const& other)
    {
        return vv > other.vv;
    }
}; // eta joss jinis.krsukal er jnno and sort 1 out of 3 or more er jnno better
/////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
       ios

    //freopen("output.txt","w",stdout);
    cin>>a>>b;
    lena=a.length();
    lenb=b.length();
    a=" "+a;
    b=" "+b;
    int lcs= LCS();
    cout<<endl<<lcs;
}



/*
*/



//Alhamdulillah
