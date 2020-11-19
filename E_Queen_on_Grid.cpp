#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M;
char A[2001][2001];
bool vis[2001][2001];
ll dp[2001][2001];
ll dx[] = {1,0,1,2,0,2};
ll dy[] = {0,1,1,0,2,2};
bool isvalid(ll i,ll j)
{
    if(i>N-1 or j>M-1 or i<0 or j<0)return false;
    if(A[i][j]=='#' or vis[i][j]==1)return false;
    return true;
}
ll dfs(ll i,ll j)
{
    
    if(i==N-1 and j==M-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    ll curr=0;
   
    for(ll k=0;k<6;++k)
    {
        //cout<<i<<' '<< j <<'\n';
        if(isvalid(i+dx[k],j+dy[k])and k<3)
        {
            vis[i+dx[k]][j+dy[k]]=1;
            curr =(curr +  dfs(i+dx[k],j+dy[k])%mod)%mod;
            vis[i+dx[k]][j+dy[k]]=0;
        }
        else if(k==3 and isvalid(i+dx[k],j+dy[k]) and A[i+dx[0]][j+dy[0]]!='#')
        {
            vis[i+dx[k]][j+dy[k]]=1;
            curr =(curr +  dfs(i+dx[k],j+dy[k])%mod)%mod;
            vis[i+dx[k]][j+dy[k]]=0;
        }
        else if(k==4 and isvalid(i+dx[k],j+dy[k])  and A[i+dx[1]][j+dy[1]]!='#')
        {
            vis[i+dx[k]][j+dy[k]]=1;
            curr =(curr +  dfs(i+dx[k],j+dy[k])%mod)%mod;
            vis[i+dx[k]][j+dy[k]]=0;
        }
        else if(k==5 and isvalid(i+dx[k],j+dy[k])  and A[i+dx[2]][j+dy[2]]!='#')
        {
            vis[i+dx[k]][j+dy[k]]=1;
            curr =(curr +  dfs(i+dx[k],j+dy[k])%mod)%mod;
            vis[i+dx[k]][j+dy[k]]=0;
        }
    }
    //cout<<i<<' '<< j <<' ';
    //cout<<curr <<'\n';
    return dp[i][j] = curr%mod;
}
void solve()
{
    cin>>N>>M;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }
    memset(dp,-1,sizeof(dp));
    cout<< dfs(0,0) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/