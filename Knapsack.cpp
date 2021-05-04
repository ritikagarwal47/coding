#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll B[K];for(ll i=0;i<K;++i)cin>>B[i];
    sort(A,A+N);sort(B,B+K);
    ll ans=0;
    ll f=0,l=N-1;
    ll i=0;
    while(f<=l)
    {
        ll p = B[i];
        if(p==1)ans+= A[l] + A[l];
        else
        {
            ans+= A[l] + A[f];
            f+= p-1;
        }
        --l;++i;
        //cout<<l<<' '<<f<<' ';
        //cout<<ans<<'\n';
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/