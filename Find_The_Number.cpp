#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void factor(ll N,vector<ll> &V)
{
    for(ll i=2;i*i<=N;++i)
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
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll ans = A[0]*A[N-1];
    vector<ll> V;
    factor(ans,V);
    sort(V.begin(),V.end());
    for(ll i=0;i<N;++i)
    {
        if(A[i]!=V[i])
        {
            cout<<"-1\n";return;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/