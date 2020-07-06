///   BISMILLAHIR RAHMANIR RAHEEM
///   ALLAH IS WATCHING ME
///   ALLAH save us from COVID-19.Amin.

///   █▀█─█──█──█▀█─█─█
///   █▄█─█──█──█▄█─█▄█
///   █─█─█▄─█▄─█─█─█─█

///   كُلُّ نَفْسٍ ذَآئِقَةُ الْمَوْت
///   Every soul shall taste death.

/// Tag::

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
const ll N = 1e7;
const ll INF = 1e18;
const ll mod = 1e9 + 7;
 ll dpr[101][1000][2],dpl[101][1000][2];

 bitset < N  +1 > bs;
 vector< ll > primes;

 void sieve ( ) {

      bs.set();
      bs[0] = bs[1] = 0 ;
      primes.push_back(2LL);
      for ( ll i = 4 ; i<=N ; i+=2 ) bs[i] = 0;

      for ( ll i = 3 ; i<=N ; i+=2 ){
           if ( bs[i] ){
               primes.push_back(i);
               for ( ll j = i*i ; j<=N; j+=i) bs[j] = 0;
           }
      }
 }

 string a , b;
 ll sza , szb;

 ll recurr ( ll idx , ll sum , bool e ){

    if ( idx==szb ) {
        // dbg ( sum );
        if ( bs[sum] ) return 1;
        else return 0;
    }

    ll &ret = dpr[idx][sum][e];
    if(~ret) return ret;

    ll ans = 0;
    for ( ll i = 0 ; i<10 ; ++i ){
          if ( e or (i<=b[idx]-'0') ) ans+=recurr ( idx + 1 , sum + i , e or (i<b[idx]-'0') );
    }

    return ret = ans;
 }

 ll recurl ( ll idx , ll sum , bool e ){

    if ( idx==sza ) {
        if ( bs[sum] ) return 1;
        else return 0;
    }

    ll &ret = dpl[idx][sum][e];
    if(~ret) return ret;

    ll ans = 0;
    for ( ll i = 0 ; i<10 ; ++i ){
         if ( e or (i<=a[idx]-'0') ) ans+=recurl ( idx + 1 , sum + i , e or (i<a[idx]-'0') );
    }

    return ret = ans;
 }


int main()
{

 // MOHAMMAD
  sieve ( );

  string digit = "0123456789";

  ll t , n , tc = 0;
  cin >> t;
  while ( t-- ){

       memset ( dpr , -1 , sizeof dpr );
       memset ( dpl , -1 , sizeof dpl );

       ll n , m;
       cin >> n >> m;
       n--;
       a="";
       b="";
       while(n){
             a+=digit[n%10];
             n/=10;
       }
       while(m){
             b+=digit[m%10];
             m/=10;
       }

       reverse(all(a));
       reverse(all(b));

     //  dbg ( a , b );
       sza = a.size();
       szb = b.size();

       ll x = recurr ( 0 , 0 , false );
       ll y = recurl ( 0 , 0 , false );

      // dbg ( x,  y );

       cout << x - y << "\n";
  }

}


/*





  Alhamdulillah
*/

