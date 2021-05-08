#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N],B[N];
    for(ll i=0;i<N;++i)cin>>A[i],B[i]=A[i];
    sort(B,B+N);
    ll x=0,y=0;
    for(ll i=0;i<N;++i)
    {
        if(B[i]<A[i])++x;
        else if(B[i]>A[i])++y;
        //cout<<x<<'\n;//cout<<y<<'\n;
    }
    //cout<<x<<'\n;//cout<<y<<'\n;
    if(x<2 and y==x)cout<<"YES\n";
    else cout<<"NO\n";   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/