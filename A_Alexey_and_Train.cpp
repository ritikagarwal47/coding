#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> A;
    ll x,y;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;
        A.push_back({x,y});
    } 
    vector<ll> V;
    for(ll i=0;i<N;++i)cin>>x,V.push_back(x);
    ll ans = A[0].first + V[0] ;
    ll p =
        //if(V[0]>0)++ans;
    for(ll i=1;i<N;++i)
    {
        ans += (A[i].first - A[i-1].second) + V[i] ;
        if(((A[i].second-A[i].first + 1)/2 )>V[i])ans += 
        //if(V[i]>0)++ans;
        ans = max(ans,A[i].second); 
        ++ans;
        //cout<<(--ans)<<'\n';
    }
    cout<<(--ans)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/