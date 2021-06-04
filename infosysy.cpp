#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> A(N+1);
    for(ll i=0;i<=N;++i)cin>>A[i];
    for(ll i=0;i<A.size();++i)
    {
        A[max(0LL,i-A[i])] = i + A[i];
    }
    ll ans=0,mx=A[0],curr=-1;
    for(int i=0;i<=N;++i)
    {
        if(i>curr)
        {
            if(mx>curr)++ans,curr=mx;
            else
            {
                cout<<"-1\n";return;
            }
        }
        mx = max(mx,A[i]);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/