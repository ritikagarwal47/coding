#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,W;cin>>N>>W;
    vector<ll> V(2e5+1,0);
    ll a,b,c;
    for(ll i=0;i<N;++i)
    {
        cin>>a>>b>>c;
        V[a]+=c;
        V[b]-=c;
    }
    for(ll i=0;i<N;++i)
    {
        if(i!=0)V[i]+=V[i-1];
        if(V[i]>W)
        {
            cout<<"No";return;
        }
    }
    cout<<"Yes";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/