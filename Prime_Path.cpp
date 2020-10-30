#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<int> adj[10001];
vector<int> pr;
bool prime(int N)
{
    for(int i=2;i*i<=N;++i)
    {
        if(N%i==0)return false;
    }
    return true;
}
bool valid(int a,int b)
{
    int c=0;
    while(a>0)
    {
        if(a%10!=b%10)++c;
        a/=10;b/=10;
    }
    if(c==1) return true ;
    else return false;
}
void buildgraph()
{
    for(int i=1000;i<=9999;++i)
    {
        if(prime(i))pr.push_back(i);
    }
    for(int i=0;i<pr.size();++i)
    {
        for(int j=i+1;j<pr.size();++j)
        {
            if(valid(pr[i],pr[j]))
            {
                adj[pr[i]].push_back(pr[j]);
                adj[pr[j]].push_back(pr[i]);
            }
        }
    }
}
int dis[10001];
int vis[10001];
void bfs(int v)
{
    queue<int> Q;
    Q.push(v);
    dis[v] = 0 ;
    vis[v]=1;
    while(!Q.empty())
    {
        int f = Q.front();Q.pop();
        for(int i : adj[f])
        {
            if(vis[i]==0)
            {
                Q.push(i);
                vis[i] = 1 ;
                dis[i] = dis[f] + 1 ;
            }
        }
    }
}
void solve()
{
    ll a,b;cin>>a>>b;
    memset(dis,-1,sizeof(dis));
    memset(vis,0,sizeof(vis));
    bfs(a);
    if(dis[b]==-1)cout<<"Impossible\n";
    else cout<<dis[b] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
buildgraph();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/