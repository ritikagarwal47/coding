#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dx[] = {0,1,0,-1};
ll dy[] = {1,0,-1,0};
ll N,M,K,c=0;
char A[500+2][500+2];
bool vis[500+2][500+2];
bool valid(ll x,ll y)
{
    if(x>=0 and y>=0 and x<N and y<M)return true;
    return false;
}
void dfs(ll i,ll j)
{
    if(K==c)return;--c;
    A[i][j]='X';vis[i][j]=1;
    for(ll k=0;k<4;++k)
    {
        ll x = i + dx[k];
        ll y = j + dy[k];
        if(valid(x,y) and A[x][y]=='.' and vis[x][y]==0)
        {
            dfs(x,y);//A[x][y]='X';vis[x][y]=1;
        }
    }
}
void solve()
{
    cin>>N>>M>>K;    
    for(ll i=0;i<N;++i)  
    {
        for(ll j=0;j<M;++j)
        {
            cin>>A[i][j];
            if(A[i][j]=='.')++c;
        }
    }
    memset(vis,0,sizeof(vis));
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]=='.')
            {
                dfs(i,j);break;
            }
        }
    }
    for(ll i=0;i<N;++i)  
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]=='#')cout<<"#";
            else if(vis[i][j])cout<<".";
            else cout<<"X";
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/