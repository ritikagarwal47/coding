#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll ans=0;
    ll A[N]={0},B[N]={0};
    for(ll i=1;i<=N;++i)
    {
        ll a = M%i;
        ll b = M%(N-a);
        ++A[a];++B[b];
    }
    for(auto i:A)cout<<i<<' ';cout<<'\n';
    for(auto i:B)cout<<i<<' ';cout<<'\n';
    for(ll a=1;a<N;++a)
    {
        for(ll b=a+1;b<=N;++b)
        {
            ll x = ((M%a)%b);
            ll y = ((M%b)%a);
            cout<<a<<' '<<b<<' ';
            cout<<x<<' '<<y<<' ';
            cout<<A[a]<<' '<<A[b]<<'\n';
            if(x==y)
            {
                //cout<<a<<' '<<b<<' ';
                //cout<<x<<' '<<y<<'\n';

                ++ans;
            }
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
