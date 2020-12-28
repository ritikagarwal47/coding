#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll mx1 = 0;
    ll ans=0;
    ll sum=0;
    for(ll i=0;i<N;i++)
        {
            sum+=A[i];
            ans=max(ans,sum);
        } 
    ll M;cin>>M;
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    ll ans2=0;
        sum=0;
         for(ll i=0;i<M;i++)
        {
            sum+=B[i];
            ans2=max(ans2,sum);
        }
        cout<<ans+ans2<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/