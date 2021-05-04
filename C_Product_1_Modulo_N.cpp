#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> ans;
    ll p=1;
    for(ll i=1;i<N-1;++i)
    {
        if(__gcd(i,N)==1)
        {
            p *=i;p%=N;
            ans.push_back(i);
        }
    }
    if(p==N-1)ans.push_back(N-1);
    cout<<ans.size()<<'\n';
    for(auto i:ans)cout<<i<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/