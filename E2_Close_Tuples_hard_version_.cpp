#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    if(N<3)
    {
        cout<<"0\n";return;
    }
    ll i=0,j=0;
    sort(A,A+N);
    ll ans=0;
    while(i<N)
    {
        while(A[j]<(A[i]-K))++j;
        
        ans += ((i-j)*(i-j-1)*M)/2;
        ++i;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/