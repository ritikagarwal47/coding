#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> A(N);for(ll i=0;i<N;++i)cin>>A[i];
    ll pos = -1;
    for(ll i=N-1;i>=0;--i)
    {
        if(A[i]!=i+1)
        {
            pos = i+1;
            break;
        }
    }
    double ans=0.0,rev=1.0;
    while(M--)
    {
        ll x;double y;cin>>x>>y;
        if(x>=pos)
        {
            ans += (rev*y);
            rev *= (1-y);
        }
    }
    if(pos==-1)cout<<"1.000000\n";
    else cout<< fixed<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/