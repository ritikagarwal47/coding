#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x;map<ll,ll> M;
    for(ll i=0;i<N;++i)cin>>x,++M[x];
    for(auto i : M)
    {
        if(i.second>=(N/2))
        {
            cout<<i.first<<'\n';
            break;
        }
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/