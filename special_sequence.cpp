#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N = 300000;
    ll pre[N+5];
    pre[0] =  0;
    pre[1] = 2;
    for(ll i=2;i<=N;++i)
    {
        ll a = sqrt(i);
        ll p = i*a + (i+1)/2 ;
        pre[i] = pre[i-1] + p; 
        //cout<<p<<' ';
    }  
    //for(ll i=0;i<10;++i)cout<<pre[i]<<' ';
    //cout<<pre[N] <<'\n';
    ll Q;cin>>Q;
    while(Q--)
    {
        ll l,r;cin>>l>>r;
        ll a = lower_bound(pre,pre+N,l) - pre;
        ll b = lower_bound(pre,pre+N,r) - pre;
        //cout<< a<<' '<<b<<'\n';
        cout<< abs(a-b) + 1 <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/