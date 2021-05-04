#include<bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[100000+5];
void solve()
{
    ll N,M;cin>>N>>M;
    vector<pair<ll,ll>> A;ll x;
    for(ll i=1;i<=N;++i)
    {
        cin>>x;A.push_back({x,N-i});
    } 
    //={0};
    sort(A.rbegin(),A.rend());//,greater<pair<ll,ll>>());
    multiset<ll> m;m.insert(0);
    multiset<ll> :: iterator it;
    for(ll i=0;i<N;++i)
    {
        x = A[i].second;
        x = N - x;
        it = m.lower_bound(x);it--;
        ll p = *it;++p;
        dp[x] = p;
        m.insert(x);
    }
    while(M--)
    {
        ll l,r;cin>>l>>r;
        if(l>r)swap(l,r);
        ll ans=0;
        for(ll i=r+1;i<=N;++i)
        {
            if(dp[i]<=l)++ans;
        }
        cout<<ans<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/