#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
     ll N,K;cin>>N>>K;
     ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
     sort(A,A+N);
     ll mn= LLONG_MAX;
     for(ll i=0;i<N-K;++i)
     {
         mn = min(mn,A[i+K-1]-A[i]);
         //cout<<mn<<' '<<A[i]<<' '<<A[i+K]<<'\n';
     } 
     cout<<mn<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/