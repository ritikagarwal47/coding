#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N],B[N];
    for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<N;++i)cin>>B[i];
    sort(A,A+N);sort(B,B+N,greater<ll>());
    for(ll i=0;i<N;++i)
    {
        if(A[i]+B[i] >K )
        {
            cout<<"No\n";return;
        }
    }
    cout<<"Yes\n";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/