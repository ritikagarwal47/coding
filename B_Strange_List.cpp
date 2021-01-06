#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; ll cnt[N];
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        ll x=A[i];
        ll c=1;
        while(x%M==0)x/=M,++c;

        cnt[i]=c;
    }
    ll mn = LONG_MAX,a=-1;
    for(ll i=0;i<N;++i)
    {
        if(mn>cnt[i])
        {
            mn = cnt[i];
            a=i;
        }
    }
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(a>=i)
        {
            ans += min(cnt[i],mn+1)*A[i];
        }
        else
        {
            ans += min(cnt[i],mn)*A[i];
        }       
        //cout<<ans<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/