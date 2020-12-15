#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N],B[N];for(ll i=0;i<N;++i)cin>>A[i],B[i]=A[i];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            B[j] = min(B[j],A[j] + abs(i-j)); 
            cout<<B[j]<<' ';
        }
        cout<<'\n';
    }
    for(ll i=0;i<N;++i)cout<<B[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/