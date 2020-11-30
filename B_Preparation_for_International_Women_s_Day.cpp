#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    map<ll,ll> M;
    ll ans=0;
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        ll p = x%K;
        if(p==0)++M[0];
        else
        {
            ll a = K - p;
            if(M[a]!=0)
            {
                ans+=2;
                M[a]--;
            }
            else M[p]++;
        }
                
    }
    cout<< ans + ((M[0]>>1)<<1) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/