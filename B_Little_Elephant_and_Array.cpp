#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
int ans[100000+5];
int A[100000+5]; 
int feq[100000000];
ll bs=0;
ll c=0,ml=0,mr=-1;
void add(ll i)
{
    ll p = ++feq[A[i]];
    if(p==A[i])++c;
    //ll n = ++feq[A[i]];
    //c += n*n*A[i] - p*p*A[i] ;
}
void del(ll i)
{
    if(feq[A[i]]==A[i])--c;

    //ll p = feq[A[i]];
    --feq[A[i]];
    //c += n*n*A[i] - p*p*A[i];
}
void fun(vector<pair<ll,pair<ll,ll>>> V,ll M)
{
    for(ll i=0;i<M;++i)
    {
        ll l = V[i].first;
        ll r = V[i].second.first;
        ll indx = V[i].second.second;
        while(ml>l)ml--,add(ml);
        while(mr>r)del(mr),mr--;
        while(ml<l)del(ml),ml++;
        while(mr<r)mr++,add(mr);
        ans[indx] = c;
    }
}
bool cmp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b)
{
    if(a.first/bs!=b.first/bs)
        return a.first/bs<=b.first/bs;
    return a.second.first<b.second.first;
}
void solve()
{
    ll N,M;cin>>N>>M;bs = ceil(sqrt(N));
    for(ll i=0;i<N;++i)cin>>A[i];
    ll u,v;c=0;
    vector<pair<ll,pair<ll,ll>>> V;
    for(ll i=0;i<M;++i)
    {
        cin>>u>>v;
        V.push_back({u-1,{v-1,i}});
    }
    sort(V.begin(),V.end(),cmp);
    fun(V,M);
    for(ll i=0;i<M;++i)cout<<ans[i]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/