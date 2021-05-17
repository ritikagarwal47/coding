#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i]; 
        if(A[i])V.push_back(i);
    }
    ll ans=0;
    for(auto i:V)
    {
        ll a=LONG_MAX,b=LONG_MAX;
        for(ll j=i;j<N;++j)
        {
            if(!A[j])
            {
                a=j;break;
            }
        }
        for(ll j=i;j>=0;--j)
        {
            if(!A[j])
            {
                b=j;break;
            }
        }
        
        if(b!=LONG_MAX)
        {
            A[b]=1;ans += abs(i-b);
        }
        else A[a]=1,ans += abs(i-a);
        //cout<<a<<' '<<b<<' '<<i<<' '<<ans<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
