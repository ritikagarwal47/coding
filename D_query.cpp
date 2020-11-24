#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll bs ,K;
bool cmp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b)
{
    if(a.first/bs!=b.first/bs)
        return a.first/bs< b.first/bs;
    return a.second.first<b.second.first;
}
ll feq[1000000+5];
ll A[1000000+5]; 
ll Ml=0,Mr=-1;
ll c=0;
void add(ll a)
{
    feq[A[a]]++;
    if(feq[A[a]]==K)++c;
    //else if(feq[A[a]==(K+1)])--c;
    //feq[A[a]]++;
}
void del(ll a)
{
    
    if(feq[A[a]]==K)--c;
    //else if(feq[A[a]]==(K-1))--c;
    feq[A[a]]--;
    
}
ll ans[1000000+5];
void fun(ll Q, vector<pair<ll,pair<ll,ll>>> V)
{
    for(ll i=0;i<Q;++i)
    {
        ll l = V[i].first - 1;
        ll r = V[i].second.first - 1;
        
        while(Ml>l)Ml--,add(Ml);
        
        while(Mr>r)del(Mr),Mr--;
        
        while(Ml<l)del(Ml),Ml++;
        
        while(Mr<r)Mr++,add(Mr);

        ans[V[i].second.second] = c;
    }
}
void solve()
{
    ll N,Q;cin>>N>>Q>>K;
    for(ll i=0;i<N;++i)cin>>A[i];
    //ll Q;cin>>Q;
    vector<pair<ll,pair<ll,ll>>> V;
    bs = ceil(sqrt(N));
    ll x,y;
    for(ll i=0;i<Q;++i)
    {
        cin>>x>>y;
        V.push_back({x,{y,i}});
    }
    //cout<<K<<'\n';
    sort(V.begin(),V.end(),cmp);
    c=0,Ml=0,Mr=-1;
    memset(feq,0,sizeof(feq));
    fun(Q,V);
    for(ll i=0;i<Q;++i)cout<< ans[i] <<' ';
    cout<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/