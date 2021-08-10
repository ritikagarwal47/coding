#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll bin(ll N, vector<ll> &V)
{
    ll l = 0,r=V.size()-1;
    while(l<=r)
    {
        ll m = (l+r)>>1;
        if(V[m]==N)return m;
        else if(V[m]>N)r=m-1;
        else l=m+1;
    }
    return 0;
}
void solve()
{
    ll H,W,N;cin>>H>>W>>N;
    vector<pair<ll,ll>> V;
    set<ll> x,y;
    for(ll i=0;i<N;++i)
    {
        ll a,b;cin>>a>>b;

        x.insert(a);
        y.insert(b);
        V.push_back({a,b});
    }  
    vector<ll> X,Y;
    for(auto i:x)X.push_back(i);
    for(auto i:y)Y.push_back(i);
    for(ll i=0;i<N;++i)
    {
        cout<< bin(V[i].first,X) + 1 <<' '<<bin(V[i].second,Y) + 1<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/