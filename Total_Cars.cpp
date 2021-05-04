#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll bs ;
bool cmp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b)
{
    if(a.first/bs!=b.first/bs)
        return a.first/bs< b.first/bs;
    return a.second.first<b.second.first;
}
ll feq[30]={0};
string A;
ll Ml=0,Mr=-1;
ll c=0;
void add(ll a)
{
    ll d = A[a] - 'a' + 1 ;
    //if(d&1)return;
    if(feq[d]==0 and d%2==0)++c;
    feq[d]++;
}
void del(ll a)
{
    ll d = A[a] - 'a' + 1 ;
    //if(d&1)return;
    if(feq[d]==1 and d%2==0)--c;
    feq[d]--;
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
    cin>>A;
    ll N = A.size();
    ll Q;cin>>Q;
    vector<pair<ll,pair<ll,ll>>> V;
    bs = ceil(sqrt(N)) + 1;
    ll x,y;
    for(ll i=0;i<Q;++i)
    {
        cin>>x>>y;
        V.push_back({x,{y,i}});
    }
    sort(V.begin(),V.end(),cmp);

    fun(Q,V);

    for(ll i=0;i<Q;++i)cout<< ans[i] <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/