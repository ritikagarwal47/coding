#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void dfs(int root,vector< vector< ll> >&path,vector<ll>&value,int v,int parent){
	
	value[root]=v;
	for(int i=0;i<path[root].size();i++){
		
		int endPoint=path[root][i];
		if(endPoint!=parent){
		    if(v==1)
			dfs(endPoint,path,value,2,root);
		else
			dfs(endPoint,path,value,1,root);
		}
	}
}
void solve()
{
    ll N;cin>>N;
    vector<vector<ll>> adj(N+1);
    ll x,y;
    for(ll i=1;i<N;++i)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<ll> A(N+1);
    dfs(1,adj,A,1,-1);
	for(ll i=1;i<=N;i++)
    cout<<A[i]<<" ";
	cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/