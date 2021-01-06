#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K; 
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    ll p[N]; for(ll i=0;i<N;++i)cin>>p[i];
    ll C[K]; for(ll i=0;i<K;++i)cin>>C[i];
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        cout<< A[c%K] <<' '<< c%K + 1 <<'\n';
        A[c] += B[c];
        ++c;
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/