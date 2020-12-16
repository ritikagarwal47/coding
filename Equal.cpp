#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll mx1=0,mx2=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<N;++i)
    {
        if(A[i]&1)mx1 = max(mx1,A[i]);
        else mx2 = max(mx2,A[i]);
    }
    ll ans1=0,ans2=0;
    if(mx1==0)mx1 = mx2 + 1;
    else if(mx2==0)mx2 = mx1 + 1;
    for(ll i=0;i<N;++i)
    {
        ll d =  abs(A[i]-mx1);
        if(d==0)continue;
        if(d&1)ans1++;
        else ans1+=2;
    }
    //++mx;
    for(ll i=0;i<N;++i)
    {
        ll d =  abs(A[i]-mx2);
        if(d==0)continue;
        if(d&1)ans2++;
        else ans2+=2;
    }
    cout<< min(ans1,ans2) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/