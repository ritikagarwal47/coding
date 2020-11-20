#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; 
    ll mx=0,mn=LONG_MAX;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        mx = max(mx,A[i]);
        mn = min(mn,A[i]);
    }
    //ll mid  = (mx+ mn )/2;
    ll a=mn;
    mx -=K;
    mn +=K;
    if(mx>mn)cout<<"-1\n";
    else cout<< a +K <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/