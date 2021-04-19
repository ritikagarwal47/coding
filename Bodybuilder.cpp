#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,R;cin>>N>>R;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N];for(ll i=0;i<N;++i)cin>>B[i];
    ll ans=B[0],mx=B[0];
    for(ll i=1;i<N;++i)
    {
        ans = max(ans - abs(A[i] - A[i-1])*R , 0LL);
       // cout<<abs(B[i] - B[i-1])<<' ';
        ans+=B[i];
        //cout<<ans<<' ';
        mx = max(ans,mx);
    }
    cout<<mx<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/