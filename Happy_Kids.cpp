#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,X;cin>>N>>X;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll mn = *min_element(A,A+N);
    ll mx = *max_element(A,A+N);
    ll d = abs(mx - mn);
    if(d<X)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/