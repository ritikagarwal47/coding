#include<bits/stdc++.h>
#define ll int
using namespace std;
//const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N;
char A[31][31];
bool vis[31][31];
bool valid(ll i,ll j)
{
    if(i<0 or i>N-1 or j<0 or j>N-1)return false;
    if(vis[i][j]==1 or A[i][j]=='T')return false;
    return true;
}
int dis[31][31];
void solve()
{
    cin>>N;
    ll x,y,a,b;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            cin>>A[i][j];
            if(A[i][j]=='S')
            {
                x = i;
                y = j;
            }
            if(A[i][j]=='E')
            {
                a=i;b=j;
            }
        }
    }
    queue<pair<int,int>> Q;
    Q.push({x,y});
    vis[x][y]=1;
    dis[x][y] = 0;
    int dx[] = {-1,0,1,0};
    int dy[] = {0,1,0,-1};
    memset(vis,0,sizeof(vis));
    while(!Q.empty())
    {
        int i = Q.front().first;
        int j = Q.front().second;
        vis[i][j]=1;
        Q.pop();
        for(int k = 0;k<4;++k)
        {
            if((i+dx[k])==a and (j+dy[k])==b)
            {
                cout<< dis[i][j] + 1 <<'\n';return;
            }
            if(valid( i + dx[k] , j + dy[k]))
            {
                Q.push({i + dx[k] , j + dy[k]});
                dis[i + dx[k]][ j + dy[k]] = dis[i][j] + 1;
            }

        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/