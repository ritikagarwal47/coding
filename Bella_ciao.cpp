#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll D,d,P,Q;cin>>D>>d>>P>>Q;
    // ll ans=0,c=0;
    // for(ll i=0;i<D;++i)
    // {
    //     ans+= P;++c;
    //     if(c==d)
    //     {
    //         P+=Q;c=0;
    //     }
    // }
    // cout<<ans<<' ';
    ll ans=0;
    if(D%d==0)
    {
        ll K = D/d;--K;//cout<<K<<' ';
        ans = P*D;//cout<<ans<<' '<<P<<' '<<D<<'\n';
        ans+= ((K*(K+1))/2)*Q*d;
    }
    else
    {
        ll K = D/d;--K;//cout<<K<<' ';
        ans = P*D;//cout<<ans<<' '<<P<<' '<<D<<'\n';
        ans+= ((K*(K+1))/2)*Q*d;++K;
        for(ll i=K*d;i<D;++i)
        {
            ans+= K*Q;
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