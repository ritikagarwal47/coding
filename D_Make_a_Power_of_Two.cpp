#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<string> dp;
void pre()
{
    for(ll i=0;i<=63;++i)
    {
        dp.push_back(to_string(1LL<<i));
    }
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
}
ll lcs(string X,string Y,ll m, ll n )
{
    //ll L[m + 1][n + 1];
    ll i=0, j=0;
    ll ans=0;
    while(i<m)
    {
        if(X[i]==Y[j])++i,++j,++ans;
        else ++i;
    }
    return ans;
}
void solve()
{
    string s;cin>>s;
    ll ans= LLONG_MAX;
    for(ll i=0;i<=63;++i)
    {
        ll x = dp[i].size();
        ll y = s.size();
        ll p = lcs(s,dp[i],y,x);
        ans = min(ans,abs(y-p) + abs(p-x));
        //cout<<p<<' '<<abs(y-p) + abs(p-x)<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/