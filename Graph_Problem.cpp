#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[10000+5];//int c;
int dfs(vector<int> adj[],int v)
{
    vis[v]=1;
    int c = adj[v].size();
    for(int i : adj[v])
    {
        if(vis[i]==0)c+=dfs(adj,i);
    }
    return c;
}
void solve()
{
    int N,M;cin>>N>>M;
    int x,y;
    vector<int> adj[N+1];
    while(M--)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vis,0,sizeof(vis));
    int mx=0;
    for(int i=1;i<=N;++i)
    {
        //int c=0;
        if(vis[i]==0) mx = max(mx,dfs(adj,i)/2);
    }
    cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/