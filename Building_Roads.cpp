#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<int> adj[(int)10e5+3];
vector<int>ans;
bool f=0;
vector<bool> vis((int)10e5+3);
void dfs(int u)
{
vis[u]=1;
if(f==0)
{
    ans.push_back(u);
    f=1;
}
for(auto i:adj[u])
{
    if(vis[i]==0) dfs(i);
}


}
void solve()
{
      int n,m;
      cin>>n>>m;
      for(int i=0;i<m;i++)
      {
          int a,b;
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
      }
      for(int i=1;i<=n;i++) vis[i]=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                f=0;
                dfs(i);
            }
        }
        cout<<ans.size()-1<<"\n";
       for(auto i=ans.begin();i!=ans.end()-1;i++)
       {
           cout<<(*i)<<" "<<(*(i+1))<<"\n";
       }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/