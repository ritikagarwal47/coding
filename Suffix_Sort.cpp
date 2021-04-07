#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];  
    if(is_sorted(A,A+N))
    {
        cout<<"YES\n0\n";return;
    }
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]>A[(i+1)%N])++c;
    }
    if(c>1)cout<<"NO\n";
    else cout<<"YES\n1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/