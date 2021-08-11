#include <bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll M = 1E7;
vector<bool> prime;
void pre(ll l,ll r)
{
    ll n = sqrt(r) + 1;
    vector<bool>pp(n+1);//={0};
    for(ll i=2;i*i<=n;++i)
    {
        if(!pp[i])
        {
            for(ll j = i*i ;j<=n;j+=i)
            {
                pp[j] = 1;
            }
        }
    }
    vector<ll> a;
    for(ll i=2;i<=n;++i)
    {
        if(pp[i]==0)a.push_back(i);
    }
    //for(auto i:a)cout<<i<<' ';cout<<'\n';
    ll m = r - l + 1;
    vector<bool> pr(m);
    for(ll i=0;i<a.size();++i)
    {
        ll p = a[i];
        ll c = 0;
        if(l%p==0)c=l;
        else 
        {
            c = ((l/p) + 1)*p;
        }
        if(c==p)c+=p;
        for(ll j=c;j<=r;j+=p)
            pr[j-l]=1;
    }
    for(ll i=0;i<m;++i)
    {
        cout<<pr[i]<<' ';
    }
    cout<<'\n';
    prime  = pr;
}
bool check(ll N)
{
    while(N>0)
    {
        ll p = N%10;N/=10;
        if(p==2 or p==3 or p==5 or p==7){}
        else return false;
    }
    return true;
}
void solve()
{
    ll l,r;cin>>l>>r;
    pre(l,r);
    ll ans=0;
    for(ll i=l;i<=r;++i)
    {
        if(!prime[i-l]  and check(i))++ans;//,cout<<i<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/