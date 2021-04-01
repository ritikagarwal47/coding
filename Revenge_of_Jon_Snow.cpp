#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,a,b;cin>>N>>a>>b;
    // if(a>b)swap(a,b);
    // if(b%a==0)
    // {
    //     cout<<(N*a)%mod<<'\n';return;
    // }
    ll g = __gcd(a,b);
    ll lm = (a*b)/g;
    //ll ans=0;
    ll l=1,r=1e18;
    while(l<r)
    {
        ll m = l + (r-l)/2;
        ll c = m/a + m/b - m/lm;
        if(c<N)l=m+1;
        else r=m;
    }
    cout<< (l%mod) <<'\n';
    // //cout<<ans<<' '<<N<<'\n';
    // ll i=1,j=1;
    // while(K<=N)
    // {
    //     ll p = (a*i)%mod;
    //     ll q = (b*j)%mod;
    //     if(p==q)
    //     {
    //         ans=p;++i;++j;//++K;
    //     }
    //     else if(p<q)
    //     {
    //         ans=p;++i;//++K;
    //     }
    //     else
    //     {
    //         ans=q;++j;//++K;
    //     }
    //     ++K;
    //     //cout<<ans<<' ';
    // }
    //cout<< (ans%mod)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/