#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// struct par{
//     ll f,s;
// };
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>>  A(N);
    for(ll i=0;i<N;++i)cin>>A[i].first>>A[i].second;
    ll M;cin>>M;vector<pair<ll,ll> > B(M);
	for(ll i=0;i<M;++i)cin>>B[i].first,B[i].second = i;
    
	sort(B.begin(),B.end());
    bool vis[N+1];memset(vis,0,sizeof(vis));
	ll mx = 0;
    vector<pair<ll,ll>> ans;
	for(ll i=0;i<M;++i)
	{
		ll m = 0, a = -1;
        //for(auto i : ans)cout<<i.first<<' '<<i.second<<'\n';
		for(ll j=0;j<N;++j)
		{

            if(!vis[j] and (A[j].first <= B[i].first) and (A[j].second > m))
		    {
                m = A[j].second ;a = j;
                //cout<< ans.size()<<' '<< mx <<'\n';
            }
            //cout<< ans.size()<<' '<< mx <<'\n';
        }
		if(a!=-1)ans.push_back({a +1, B[i].second+1}),mx += m , vis[a] = 1;
        //for(auto i : ans)cout<<i.first<<' '<<i.second<<'\n';
        //cout<< ans.size()<<' '<< mx <<'\n';
	}
	
	cout<< ans.size()<<' '<< mx <<'\n';
	for(auto i : ans)cout<<i.first<<' '<<i.second<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/