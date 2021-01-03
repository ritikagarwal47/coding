#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> fun(ll N)
{
    vector<ll> V;
    for(ll i=1;i*i<=N;++i)
    {
        if(N%i==0)
        {
            if(i*i==N)V.push_back(i);
            else
            {
                V.push_back(i);V.push_back(N/i);
            }
        }
    }
    return V;
}
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[M]; for(ll i=0;i<M;++i)cin>>A[i];
    ll g =0;
    for(ll i=0;i<M;++i)
    {
        g = __gcd(g,A[i]);
    }
    vector<ll> V = fun(g);
    sort(V.begin(),V.end());
    for(ll i=V.size()-1;i>=0;--i)
    {
        if(V[i]<=N)
        {
            cout<< N - V[i]<<'\n';return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/