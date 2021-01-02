#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //map<ll,ll> M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];//,M[A[i]]++;
    ll ans=0;
    for(ll i=1;i<N;++i)
    {
        ans += abs(A[i-1] - A[i]);
    }
    ll ans1 = 0;
    for(ll i=1;i<N-1;++i)
    {
        ans1 = max(ans1,abs(A[i] -A[i-1]) + abs(A[i] - A[i+1]) - abs(A[i-1] - A[i+1]));
    }
    ans1 = max(ans1,abs(A[1]-A[0]));
    ans1 = max(ans1,abs(A[N-1] - A[N-2]));
    cout<< ans - ans1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/