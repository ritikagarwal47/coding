#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M,c=0;
ll A[20][20],vis[20][20];
bool valid(ll x,ll y)
{
    if(x<0 or y<0 or x>N-1 or y>M-1)return false;
    if(A[x][y]==0 or vis[x][y]==1)return false;
    return true;
}
ll dx[] = {0,1,0,-1,-1,1};
ll dy[] = {1,0,-1,0,-1,1};
void dfs(ll i,ll j)
{
    vis[i][j]=1;
    ++c;
    for(ll k=0;k<6;++k)
    {
        if(valid(i+dx[k],j+dy[k]))
        {
            dfs(i+dx[k],j+dy[k]);
        }
    }
}
void solve()
{
    cin>>N>>M;
    //ll A[N][M]; 
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }
    ll mx=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            c=0;
            if(A[i][j]==1)
            {
                memset(vis,0,sizeof(vis));
                dfs(i,j);
            }
            mx=max(mx,c);
        }
    }
    cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/