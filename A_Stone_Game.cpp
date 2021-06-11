#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];ll x;ll a,b;
    for(ll i=1;i<=N;++i)
    {
        ll x;cin>>x;
        if(x==1)a=i;
        if(x==N)b=i;
    } 
    //min(a,N-a),min(b,N-b);
    // if(a<=N/2 and b<=N/2)cout<<max(a,b)<<'\n';
    // if(a>N/2 and b>N/2)cout<<max(N-a+1,N-b+1)<<'\n';
    // else cout<<min(a,N-a)+min(b,N-b)<<'\n';
    ll p = max(a,b);
    ll q = max(N-a+1,N-b+1);
    ll r = min(a + N-b+1,b + N-a+1);
    cout<<min(p,min(q,r))<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/