#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool ok=false;
bool A[6][6];
bool vis[6][6]={0};
ll dx[]={-1,0,1,0};
ll dy[]={0,-1,0,1};
bool valid(ll i,ll j)
{
    if(i<6 and j<6 and i>=0 and j>=0 and vis[i][j]==0 and A[i][j]==0)return true;
    return false;
}
void dfs(ll x,ll y)
{
    if(x==5 and y==5)
    {
        ok=true;return;
    }
    for(ll i=0;i<4;++i)
    {
        if(valid(x+dx[i],y+dy[i]))
        {
            vis[x+dx[i]][y+dy[i]]=1;
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
void solve()
{
    for(ll i=0;i<6;++i)
    {
        for(ll j=0;j<6;++j)cin>>A[i][j];
    }
    dfs(0,0);
    if(ok)cout<<"Yes\n";
    else cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/