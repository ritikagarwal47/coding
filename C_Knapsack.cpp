#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,W;cin>>N>>W;
    vector<pair<ll,ll> > V;
    ll x,mn=LLONG_MAX;//,mx=0;
    ll s=0;
    ll c = (W+1)/2;
    bool f=false;
    ll an=0;
    for(ll i=1;i<=N;++i)
    {
        cin>>x;
        //s+=x;
        if(x<=W and x>=c)
        {
            f=true;
            an=i;
        }
        if(x<c)V.push_back({x,i}),s+=x;
        //mx= max(mx,x);
        mn= min(mn,x);
    }
    if(f)
    {
        cout<<"1\n"<< an<<'\n';return;
    }
    if(mn>W or s<c)
    {
        cout<<"-1\n";return;
    }
    sort(V.begin(),V.end());

    //ll a=N-1;
    s=0;
    //ll s=0;
    vector<ll> ans;
    for(ll i=0;i<V.size();++i)
    {
        s+=V[i].first;
        if(s < W)
        {
            //s+= V[i].first;
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