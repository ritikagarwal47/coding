#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N+1];B[0]=0;
    for(ll i=1;i<=N;++i)
    {
        if(A[i-1]&1)B[i] = B[i-1] + 1;
        else B[i] = B[i-1];
    }
    //for(auto i:B)cout<<i<<' ';cout<<'\n';
    while(Q--)
    {
        ll a,b;cin>>a>>b;
        ll o = B[b] - B[a-1];
        ll e = (b-a + 1) - o;
        //cout<<e<<' '<<o<<'\n';
        ll x = 0;
        if(e>2)x = (e*(e-1)*(e-2))/6;
        ll y = 0;
        if(o>1)y = (o*(o-1)/2)*(e);
        //cout<<x<<' '<<y<<'\n';
        cout<< x + y <<'\n'; 
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/