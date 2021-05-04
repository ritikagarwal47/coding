#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> A,B;
    ll x,p=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;x+=p;p=x;
        A.push_back(x);
    }
    p=0;
    for(ll i=0;i<M;++i)
    {
        cin>>x;x+=p;p=x;
        B.push_back(x);
    }
    //for(auto i:A)cout<<i<<' ';cout<<'\n';
    //for(auto i:B)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    for(ll i=N-1;i>=0;--i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i]==B[j])
            {
                ans=A[i];break;
            }
        }
    }
    if(ans!=0)cout<<ans<<'\n';
    else cout<<"Not possible\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/