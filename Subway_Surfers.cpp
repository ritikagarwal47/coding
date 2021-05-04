#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll R,N,T;cin>>R>>N>>T;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(T<=0)break;
        if(T==1)
        {
            ans+= (A[i]+1)/2;--T;break;
        }
        ans+= A[i];T-=2;
    }
    (ans>R)?cout<<"YES\n":cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/