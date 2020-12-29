#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<ll,vector<pair<ll,ll>>> M;
    ll l,r,v;
    for(ll i=0;i<N;++i)
    {
        cin>>l>>r>>v;
        M[v].push_back({l,r});
    }
    for(auto i : M)
    {
        vector<pair<ll,ll>> V = i.second;
        ll n = V.size();
        ll L[n],R[n];
        for(ll j=0;j<n;++j)
        {
            L[j]=V[j].first;
            R[j]=V[j].second;
        }
        sort(L,L+n);sort(R,R+n);
        ll c=0,a1=0,a2=0;
        while(a1<n and a2<n)
        {
            if(L[a1]<=R[a2])++c,++a1;
            else --c,++a2;
            if(c==3)
            {
                cout<<"NO\n";return;
            }
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/