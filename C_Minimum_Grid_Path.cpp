#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll s0=A[0],s1=A[1];
    ll mn0=A[0],mn1=A[1];
    ll ans = (s0 + s1)*N;
    for(ll i=2;i<N;++i)
    {
        if(i%2==0)s0+=A[i],mn0=min(mn0,A[i]);
        else s1+=A[i],mn1=min(mn1,A[i]);

        ans = min(ans,s0 + mn0*(N - (i+2)/2) + s1 + mn1*(N - (i+1)/2) );
       // mn0+=s0;s0=0;
       // mn1+=s1;s1=0;
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/