#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void dfs(vector<int> adj[],int v,vector<int> &ans,int *vis)
{
    vis[v]=1;
    ans.push_back(v);
    for(auto i:adj[v])
    {
        if(!vis[i])
        {
            dfs(adj,i,ans,vis);
        }
    }
}
int countcandies(....)
{
        int mx=0,res=0;
    while(x--)
    {
        vector<int> adj[x+1];
        for(int i=0;i<n;++i)
        {
            if(c[i]==x)
            {
                adj[b[i]].push_back(a[i]);
                adj[a[i]].push_back(b[i]);
            }
        }
        int vis[x]={0};
        for(int i=1;i<=x;++i)
        {
            if(!vis[i])
            {
                vector<int> ans;
                dfs(adj,i,ans,vis);
                if(ans.size()==mx)
                {
                    sort(ans.begin(),ans.end());
                    res = max(res,ans[mx-1]*ans[mx-2]);
                }
                else if(ans.size()>mx)
                {
                    mx = ans.size();
                    sort(ans.begin(),ans.end());
                    res = ans[mx-1]*ans[mx-2];
                }
            }
        }
    }
}
void solve()
{
    int x;cin>>x;
    int n;cin>>n;
    int a[n];for(int i=0;i<n;++i)cin>>a[i];
    cin>>n;
    int b[n];for(int i=0;i<n;++i)cin>>b[i];
    cin>>n;
    int c[n];for(int i=0;i<n;++i)cin>>c[i];
    int mx=0,res=0;
    while(x--)
    {
        vector<int> adj[x+1];
        for(int i=0;i<n;++i)
        {
            if(c[i]==x)
            {
                adj[b[i]].push_back(a[i]);
                adj[a[i]].push_back(b[i]);
            }
        }
        int vis[x]={0};
        for(int i=1;i<=x;++i)
        {
            if(!vis[i])
            {
                vector<int> ans;
                dfs(adj,i,ans,vis);
                if(ans.size()==mx)
                {
                    sort(ans.begin(),ans.end());
                    res = max(res,ans[mx-1]*ans[mx-2]);
                }
                else if(ans.size()>mx)
                {
                    mx = ans.size();
                    sort(ans.begin(),ans.end());
                    res = ans[mx-1]*ans[mx-2];
                }
            }
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/