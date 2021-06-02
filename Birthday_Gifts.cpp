#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];sort(A,A+N);
    ll p=N;
    ll s1 = 0,s2 = 0;
    while(K--)
    {
        --p;
        s1 +=(A[p]%mod);
        --p;
        s2 +=(A[p]%mod);
    }
    if(p!=0)s2+=(A[p-1]%mod);
    cout<< (s1>s2?s1:s2)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/