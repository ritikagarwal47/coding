#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,W;cin>>N>>W;
    vector<pair<ll,ll> > V;
    ll x,mn=LLONG_MAX,mx=0;
    for(ll i=1;i=N;++i)
    {
        cin>>x;
        V.push_back({x,i});
        mx= max(mx,x);
        mn= min(mn,x);
    }
    if(mn>W)
    {
        cout<<"-1\n";return;
    }
    sort(V.begin(),V.end());
    ll c;
    if(W&1)c = W/2 + 1;
    else c = W/2;
    ll a=N-1;
    ll s=0;
    vector<ll> ans;
    for(ll i=N-1;i>=0;--i)
    {
        if(V[i].first==c)
        {
            cout<<"1\n";
            cout<<V[i].second<<'\n';
            return;
        }      
        else if((s+V[i].first) < c)
        {
            s+= V[i].first;
            ans.push_back(V[i].second);
        }
    }
    cout<< ans.size()<<'\n';
    for(auto i : ans)cout<<i<<' ';cout<<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/