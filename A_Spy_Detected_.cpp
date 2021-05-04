#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x,A[N];map<ll,ll> M;
    for(ll i=0;i<N;++i)cin>>x,A[i]=x,++M[x];  
    ll ans=0;
    for(auto i :M)
    {
        if(i.second==1)
        {
            ans=i.first;break;
        }
    }
    for(ll i=0;i<N;++i)
    {
        if(A[i]==ans)
        {
            cout<<i+1<<'\n';return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/