#include<bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M;
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
bool vis[1000+1][1000+1];
char A[1000+1][1000+1];
bool valid(ll x,ll y)
{
    if(x<0 or x>(N-1) or y<0 or y>(M-1))return false;
    if(vis[x][y]==1 or A[x][y]=='#')return false;
    return true;
}
void dfs(ll x,ll y)
{
    vis[x][y]=1;
    for(int i=0;i<4;++i)
    {
        if(valid(x + dx[i],y + dy[i]))
        dfs(x + dx[i] , y + dy[i] );
    }
} 
void solve()
{
    cin>>N>>M;
    //char A[N][M];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cin>>A[i][j];
        }
    }
    ll ans=0;
    memset(vis,0,sizeof(vis));
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]=='.' and vis[i][j]==0)
            {
                //cout<<A[i][j]<<' '<<vis[i][j]<<' ';
                dfs(i,j);
                ++ans;                
               // cout<<i<<' '<<j<<'\n';
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/