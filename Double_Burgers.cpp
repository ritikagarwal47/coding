#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll X,Y;cin>>X>>Y;
    if(Y%X)
    {
        cout<<"-1\n";return;
    } 
    ll ans=LLONG_MAX;
    ll s=Y/X;bool ok=false;
    // while(s<=Y)
    // {
    //     ll c=X;bool ok=false;
    //     while(1)
    //     {
    //         if((c+s)<=Y)s+=c,++ans,ok=true;
    //         else break;
    //         c *=2;
    //         //cout<<c<<' '<<s<<'\n';
    //     }
    //     //cout<<ans<<'\n';
    //     if(s==Y)
    //     {
    //         cout<<ans<<'\n';return;
    //     }
    //     if(!ok)break
    //     ++ans;
    // }
    for(ll n=1;n<=60;++n)
    {
        ll a = s+n,c=0,m=0;
        for(ll i=60;i>=0;--i)
        {
            if(a&(1LL<<i))++c,m+=i;
        }
        if(c==n)ans=min(ans,m+c-1),ok=true;
    }
    if(ok)
    {
        cout<<ans<<'\n';return;
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/