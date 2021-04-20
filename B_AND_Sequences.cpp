#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fact(ll N)
{
    if(N<=1)return 1;
    return (N*fact(N-1))%mod;
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll ans=0;//A[0];
    for(ll i=0;i<N;++i)
    {
        if(A[i]==A[0])++ans;
        if((A[i]&A[0])!=A[0])
        {
            cout<<"0\n";return;
        }
    }
    // ll c=0;
    // for(ll i=0;i<N;++i)
    // {
    //     if(ans==A[i])++c;
    // }
    //ans = c;
    ans = (ans*(ans-1))%mod;
    cout<< (ans*(fact(N-2)))%mod <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/