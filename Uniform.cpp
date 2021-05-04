#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=998244353;
//The end result of coders personal growth is,there codes becomes there documentation
ll par[10000+3],sz[10000+3];
ll power(ll a,ll b)
{
    if(b==0) return 1;
    if(b&1) return (a*power((a*a)%mod,b/2))%mod;
    return power((a*a)%mod,b/2);
}
ll find(ll a)
{
    if(par[a]==a) return a;
    return par[a]=find(par[a]);
}
void merge(ll a,ll b)
{
    ll x=find(a);
    ll y=find(b);
    if(x==y) return;
    if(sz[x]<sz[y]) swap(x,y);
    sz[x]+=sz[y];
    par[y]=x;
    return;
}
void solve()
{
    ll n,m,c;cin>>c>>n>>m;
    set<pair<pair<ll,ll>,ll>> s;
    for(ll i=0;i<c;i++)
    {
        sz[i]=1;par[i]=i;
        ll x;cin>>x;
        while(x--)
        {
            ll l,r;cin>>l>>r;
            s.insert({{l,0},i});
            s.insert({{r,1},i});
        }
    }
    ll cnt=0,last=0,ans=0,root=-1;
    for(auto i:s)
    {
        //cout<<"{ "<<i.fi.fi<<", "<<i.fi.se<<", "<<i.se<<" }, ";
        ll tag=i.first.second;
        if(tag==1) cnt--;
        else
        {
            if(cnt==0) 
            {
                ans+=(i.first.first-last-1);
                root=i.second;
            }
            merge(root,i.second);
            cnt++;
        }
        last=i.first.first;
    }
    ans+=(n-last);
    set <ll> f;
    for(ll i=0;i<c;i++)f.insert(find(i));
    cout<<power(m,ans + f.size())<<endl;  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/