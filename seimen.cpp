#include<stdio.h>
#include<string.h>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
map<ll,ll>mp[30][30];
int n,m,t;
ll k,num[30][30],ans;
// double-ended dfs, one from (1,1) to (i,j) and i+j==max(n,m)
 
void dfs1(int x,int y,ll tt)
{
 if(x+y==t)
 {
   mp[x][y][tt]++; //Use the map to record the number of tt when searching for points (y, x)
  return ;
 }
 if(x+1<=n)
    dfs1(x+1,y,tt^num[x+1][y]);
 if(y+1<=m)
    dfs1(x,y+1,tt^num[x][y+1]);
}
 // second from (n,m) to (i,j) and (i+j)==max(n,m)+1
void dfs2(int x,int y,ll tt)
{
 if(x+y==t+1)
 {
  if(x-1>=1)
   ans+=mp[x-1][y][tt^k];
  if(y-1>=1)
      ans+=mp[x][y-1][tt^k];
  return ;
 }
 if(x-1>=1)
   dfs2(x-1,y,tt^num[x-1][y]);
 if(y-1>=1)
   dfs2(x,y-1,tt^num[x][y-1]);
}
int main()
{
 while(~scanf("%d%d%lld",&n,&m,&k))
 {
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=m;j++)
   {
       mp[i][j].clear();
      scanf("%lld",&num[i][j]);
   }
  }
  ans=0;
  t=max(n,m);
  if(1+1<=t)
  {
   dfs1(1,1,num[1][1]);
   dfs2(n,m,num[n][m]);
  }
  else
  {
   if(num[1][1]==k)
    ans++; 
  }
  printf("%lld\n",ans);
 }
}