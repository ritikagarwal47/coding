#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[101],B[101];
ll vis[101];
ll a=1;
void dfs(ll x)
{
    vis[x]=1;
    for(ll i=1;i<a;++i)
    {
        if(vis[i])continue;
        if(A[x]>A[i] and B[i]>A[x])dfs(i);
        else if(A[i]<B[x] and B[i]>B[x])dfs(i);
    }
}
void solve()
{
    ll N;cin>>N;
    while(N--)
    {
        ll x;cin>>x;
        if(x&1)
        {
            ll y,z;cin>>y>>z;
            A[a]=y;B[a]=z;++a;
        }
        else
        {
            ll y,z;cin>>y>>z;
            memset(vis,0,sizeof(vis));
            dfs(y);
            if(vis[z])cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/