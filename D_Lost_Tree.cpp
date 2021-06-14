#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
      int n;
      cin>>n;vector<int> adj[n+1];
      vector<int> vis(n+1,0);
      for(int i=1;i<=n;i++)
      {
          if(vis[i]==0)
          {   
              vis[i]=1;
              cout<<"? "<<i<<endl;
              vector<int> get(n+1);
              for(int ii=1;ii<=n;ii++)
              cin>>get[ii];
              for(int ii=1;ii<=n;ii++)
              {
                  if(get[ii]==1)
                  {
                      adj[i].push_back(ii);
                     // adj[ii].push_back(i);
                      vis[ii]=1;
                  }
              }
          }
      }
      cout<<"!"<<endl;
      for(int i=1;i<=n;i++)
      {
          for(auto j:adj[i])
        {
            cout<<i<<" "<<j<<endl;
        }
      }
      
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/