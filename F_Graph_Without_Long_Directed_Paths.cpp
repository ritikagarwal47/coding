#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<int> adj[(int)20e5+3];
vector<bool> vis((int)20e5+3),ans((int)20e5+3);

bool dfs(int u,int c)
{
    vis[u]=1;
    ans[u]=c;
    for(auto i:adj[u])
    {
        if(vis[i]==0)
        {
            if(!dfs(i,c^1)) return 0;
        }
        else
        {
            if(ans[u]==ans[i]) return false;
        }
    }
    return true;
}

void solve()
{
      ll n,m;
      cin>>n>>m;
      for(int i=1;i<=n;i++) vis[i]=0;
      vector<pair<int,int>> e(m);
      for(int i=0;i<m;i++)
      {
          int a,b;
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
          e[i].first=a;
          e[i].second=b;
      }
      if(dfs(1,0)==false)
      {
          cout<<"NO\n";
          return;
      }
     for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
      
      cout<<"YES\n";
     for(auto i:e) {
		cout << (ans[i.first] < ans[i.second]);
	}
	cout << endl;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/