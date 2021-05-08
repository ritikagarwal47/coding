#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V;ll x,y;
    for(ll i=0;i<N;++i)cin>>x>>y,V.push_back({x,y});
    //sort(V.begin(),V.end());
    //cout<<V[0].first<<' '<<V[0].second<<'\n';
    //cout<<V[V.size()-1].first<<' '<<V[V.size()-1].second<<'\n';
    vector<double> A;
    for (ll i=0;i<N;++i)
	{
        double x = (atan2(V[i].first,V[i].second)*180)/acos(-1);
        //cout<<x<<'\n';
        A.push_back(x);		
	}
	sort(A.begin(),A.end());
	double ans = A[N-1]-A[0];
	for (ll i=1;i<N;++i)ans = min(ans , 360.0 - A[i]+A[i-1]);

	cout<<fixed<<setprecision(6)<<ans;  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/