#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<pair<ll,bool>> A(100+2);
ll find(ll v)
{
	if(A[v].first==-1)return v;
	return find(A[v].first);
} 
void merge(ll a , ll b)
{
	a = find(a);b = find(b);
	if(a==b)return;
	A[a].first = b;
}
void solve()
{
    ll N,M;cin>>N>>M;
    for(ll i=0;i<=M;++i)A[i].first=-1,A[i].second=false; 

    ll ans=0;
    ll x;
    for(ll i=0;i<N;++i)
    {
        //cout<<ans<<'\n';
        
        cin>>x;
        if(x==0)
		{
			++ans;
			continue;
		}
        vector<ll> V;
        //cout<<ans<<'\n';
        ll y;
		for(ll j=0;j<x;++j)cin>>y,V.push_back(y),A[y].second = 1;
		
		for(ll j=0;j<V.size();++j)
		{
            for(ll k=j+1;k<V.size();++k)merge(V[k],V[j]);
        }
    }
    bool f = false;	
	for(ll i=1;i<=M;++i)
    {
	    if(A[i].first==-1 and A[i].second==1)
	    {
		f = true;++ans;
        }
        //cout<<ans<<'\n';
	}
	if(f)--ans;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/