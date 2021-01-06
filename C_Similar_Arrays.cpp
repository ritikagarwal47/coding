#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll mx =0 , mn = LLONG_MAX;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],mn=min(mn,A[i]),mx=max(mx,A[i]);
    if(mn==mx)
    {
        cout<<"0";return;
    }
    sort(A,A+N);
    ll p = (mx - mn)/2;
    cout<< mx <<' '<< mn <<' '<<p<<'\n';
    ll a = lower_bound(A,A+N,p) - A ;
    cout<< a <<' ';
    cout<< A[a] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/