#include<bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    //ld ans = 0;
    //ld c = 0;
    ld mx=0.0;
    for(ll i=K;i<=N;++i)
    {
        ld s=0.0;
        for(ll j=0;j<i;++j)
        {
            s+=A[j];
        }
        mx = max(mx,s/i);
        for(ll j=i;j<N;++j)
        {
            s+= A[j] - A[j-i];
            mx = max(mx,s/i);
        }
    }
    cout<<fixed<<setprecision(15)<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/