#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll t=1;
bool cmp(ll a,ll b)
{
    ll x = a%10;
    ll y = b%10;
   while(x==y and x!=0 and y!=0)
   {
       a/=10;b/=10;
       x%=10;y%=10;
   }
   return x<y;
}
void solve()
{
    ll N;cin>>N;
    //ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    vector<ll> adj[10];
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        adj[x%10].push_back(x);
    }
    for(ll i=0;i<10;++i)
    {
        sort(adj[i].begin(),adj[i].end(),cmp);
    }
    cout<<"Case "<<t++<<":\n";
    //for(ll i=0;i<N;++i)cout<<A[i]<<'\n';
    for(ll i=0;i<10;++i)
    {
        for(auto j : adj[i])cout<<j<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/