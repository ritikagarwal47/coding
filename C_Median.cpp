#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll x;
    vector<ll> A; for(ll i=0;i<N;++i)cin>>x,A.push_back(x);
    sort(A.begin(),A.end());
    ll ans=0;
    while(A[(A.size()+1)/2 - 1]!=M)
    {
        ++ans;A.push_back(M);
        sort(A.begin(),A.end());
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/