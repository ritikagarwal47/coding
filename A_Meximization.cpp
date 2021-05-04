#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        M[x]++;
    } 
    vector<ll> A,B;
    for(auto i : M)
    {
        A.push_back(i.first);
        for(ll j=0;j<i.second-1;++j)
        {
            B.push_back(i.first);
        }
    }
    for(ll i=0;i<A.size();++i)cout<<A[i]<<' ';
    for(auto i : B)cout<<i<<' ';
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/