#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];//,s+=A[i];
    sort(A,A+N);
    for(ll i=0;i<N;++i)
    {
        s+= A[i]*(4*(i+1) - 2*N - 1);
    }
    //cout<<s<<' ';
    ll p = __gcd(s,N);
    //cout<<p<<'\n';
    cout<< s/p <<' '<<N/p<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/