#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N],ans=0;for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=1;i<N;++i)
    {
        if(A[i]>=A[i-1])continue;
        ll p = A[i-1] - A[i];
        ans+=p;
        A[i]+=p;
        //0cout<<ans<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/