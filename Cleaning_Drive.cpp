#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(vector<pair<ll,ll>> &V,ll m,ll M,ll N)
{
    priority_queue<ll, vector<ll>, greater<ll>> p;
    ll ans=1,i=0;
    while(1)
    {
        while(i<M and ans>=V[i].first)p.push(V[i].second),++i;
        
        if(p.empty())break;
        ll t = p.top();p.pop();
        //cout<<t<<' '<<m<<'\n';
        ans = max(ans,min(t,ans+m));
    }
    return ans>=N;
}
void solve()
{
    ll N,M;cin>>N>>M;
    vector<pair<ll,ll>> V;
    for(ll i=0;i<M;++i)
    {
        ll x,y;cin>>x>>y;
        V.push_back({x,y});
    }  
    sort(V.begin(),V.end());
    ll l=1,h=N+1,ans=N+1;
    while(l<=h)
    {
        ll m = (l+h)>>1;
        if(valid(V,m,M,N))ans=m,h=m-1;
        else l=m+1;
    }
    cout<< ((ans==N+1)?-1:ans) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/