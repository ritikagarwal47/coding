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
    vector<ll> V;
    for(auto i : M)V.push_back(i.second);
    sort(V.begin(),V.end()) ;
    for(ll i=1;i<V.size();++i)
    {
        if(V[i]==V[i-1])
        {
            cout<<"No\n";return;
        }
    } 
    cout<<"Yes\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/