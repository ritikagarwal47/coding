#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll bits[32];//={0};
    for(ll i=0;i<32;++i)bits[i]=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<32;++j)
        {
            //cout<<(1<<j) <<'\n';
            if(A[i]&(1<<j))
            {
                bits[j]++;
            }
        }
    } 
    //for(ll i=0;i<32;++i)cout<<bits[i]<<' ';cout<<'\n';
    ll ans=0; 
    for(ll i=0;i<32;++i)
    {
        if(bits[i]>0)ans+= (1<<i);
    }
    cout<<ans<<'\n';
    while(Q--)
    {
        ll a,b;cin>>a>>b;
        ll p = A[a-1];
        for(ll i=0;i<32;++i)
        {
            if(p&(1<<i))bits[i]--;
        }
        A[a-1] = b;
        for(ll i=0;i<32;++i)
        {
            if(b&(1<<i))bits[i]++;
        }
        ll ans=0; 
        for(ll i=0;i<32;++i)
        {
            if(bits[i]>0)ans+= (1<<i);
        }
        cout<<ans<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/