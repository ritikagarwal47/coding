#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<N-M+1;++i)
    {
        set<ll> st;
        for(ll j=i;j<i+M;++j)
        {
            st.insert(A[j]);
        }
        ans = max(ans,(ll)st.size());
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/