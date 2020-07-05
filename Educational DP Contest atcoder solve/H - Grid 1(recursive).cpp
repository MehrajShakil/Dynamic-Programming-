///   BISMILLAHIR RAHMANIR RAHEEM
///   ALLAH IS WATCHING ME
///   ALLAH save us from COVID-19.Amin.

///   █▀█─█──█──█▀█─█─█
///   █▄█─█──█──█▄█─█▄█
///   █─█─█▄─█▄─█─█─█─█

///   كُلُّ نَفْسٍ ذَآئِقَةُ الْمَوْت
///   Every soul shall taste death.

/// TODO::

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

///  order_of_key return number of elements less than x.
///  find_by_order return index.

using namespace std;
using namespace __gnu_pbds;


#define MOHAMMAD  ios::sync_with_stdio(0);cin.tie(0);
#define all(x)    (x).begin(), (x).end()
#define AE        cout << fixed << setprecision(10);

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)
//***********************************************  The END **********************************************************************************************************************************
using ll = long long;
const ll N = 1e3 + 1;
const ll INF = 1e18;
const ll mod = 1e9 + 7;

ll dp[N][N] , h , w;
string s[N];

ll recur ( ll i , ll j ){

 //dbg ( i , j );
 if ( s[i][j] == '#' ) return 0;

 if ( i==h-1 and j==w-1 ) return 1;
 if( i>=h or j>=w ) return 0;




 ll &ret = dp[i][j];

 if(~ret) return ret;

 ll l = 0 , r = 0 , u = 0 , d = 0;

// if ( j-1 >= 0 ) l = recur ( i , j - 1 , 1 , 0 , 0 , 0 );
 r = recur ( i , j + 1 );
 u = recur ( i + 1 , j );
// if ( i - 1 >= 0 ) d = recur ( i - 1 , j , 0 , 0 , 0 , 1);
 //dbg ( i , j ,  r  ,  u );
 return ret = ( l + r + u + d ) % mod;

}




int main()
{

  MOHAMMAD

  memset ( dp , -1 , sizeof dp );

  cin >> h >> w;

  for ( ll i = 0 ; i<h ; ++i ){
       cin >> s[i];
  }

  cout << recur ( 0 , 0 );

  return 0;
}


/*





  Alhamdulillah
*/

