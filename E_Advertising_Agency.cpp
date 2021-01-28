#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll t=1;
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        for(ll j=i+1;j<N;++j)
        {
            M[A[i]]++;
            M[A[i]+A[j]]++;
        }
    }
    ll mx=0;
    for(auto i : M)
    {
        mx=max(mx,i.second);
    }
    cout<<mx<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/