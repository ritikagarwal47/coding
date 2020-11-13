#include<bits/stdc++.h>
#define ll long long int
const ll lg = 1e18 + 143;
using namespace std;
const int mod=1e9+7;
template<class T> inline void mx(T &a,T b){if(a<b) a = b ; }
template<class T> inline void mn(T &a,T b){if(a>b) a = b ; }
template<class T> inline T abs(T a){return a>0 ? a : -a; }
// I'm in Love with Experience ^_^
ll A[2000+5];
void solve()
{
    ll n;cin>>n;
    //assert(1 <= n and n <= 20000);
    for(ll i=1;i<=n;++i)
    {
        cin>>A[i];
        //assert(abs(A[i])<=int(mod));
    }
    ll ans = -lg;
    for(ll i=1;i<=n;++i)
    {
        ll op=0;
        {
           ll x = i - 1, y = i;ll bt = 0ll, cr = 0ll;
           while(x >= 1 and y<= n)
            {
               op = (ll)A[x] * A[y];
                cr += op;mn(bt, cr);
                mx(ans, cr - bt);
                --x;++y;
            }
       }
        {
           ll p = i - 1, q = i+1;ll b = 0ll, c = 0ll;
           while(p >= 1 && q <= n)
            {
               op = (ll)A[p] * A[q];
                c += op;mn(b, c);
                mx(ans, c - b);
                --p;++q;
            }
       }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/