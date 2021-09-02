#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i]; 
    ll B[N];for(ll i=0;i<N;++i)cin>>B[i]; 
    ll C[N];for(ll i=0;i<N;++i)cin>>C[i]; 
    ll ans=0;
    ll i=0,j=0,k=0;
    while(i<N and j<N and k<N)
    {
        if(A[i]<B[j] and B[j]<C[k])++ans;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/