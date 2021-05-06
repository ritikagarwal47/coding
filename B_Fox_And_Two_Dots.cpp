#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
char S[51][51];
ll t[51][51] , c = 1;
bool vis[51][51];
ll N,M;
ll dx[] = {-1 , 0 , 1 , 0};
ll dy[] = {0 , 1 , 0 , -1}; 
bool isValid(ll i, ll j)
{
	if(i<0 or j<0 or i>=N or  j>=M)return false;
	return true;
} 
bool dfs(ll i,ll j,pair<ll,ll> pre)
{
	if(vis[i][j])
	{
		if((c - t[i][j])>1)return true;
		return false;
	}	
	vis[i][j] = 1;
	t[i][j] = c;++c;
	
	for(ll k=0;k<4;k++)
	{
        if(isValid(i+dx[k],j+dy[k]) and S[i+dx[k]][j+dy[k]]==S[i][j] and !(pre.first == (i+dx[k]) and pre.second == (j+dy[k])))
	    {
		    if(dfs(i+dx[k] , j+dy[k] , {i , j}))return true;
	    }
    }
	return false;
}
void solve()
{
	cin>>N>>M;
	for(ll i=0;i<N;++i)
        for(ll j=0;j<M;++j)
            cin>>S[i][j];
	for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
	        if(!vis[i][j])
	        {
		        if(dfs(i , j , {i,j}))
		        {
			    cout<<"Yes";return;
		        }
            }
        }
	}
	cout<<"No";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/