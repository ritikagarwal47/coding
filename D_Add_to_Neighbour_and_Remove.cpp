#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool check(ll s,ll *A,ll N)
{
    ll sub=0;
    for(ll i=1;i<=N;++i)
    {
        sub+=A[i];
        if(sub==s)sub=0;
        if(sub>s)return false;
    }
    return true;
}
void solve()
{
    ll N,s=0;cin>>N;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i],s+=A[i];
    for(ll i=N;i>=1;--i)
    {
        if(s%i==0 and check(s/i,A,N))
        {
            cout<< N - i <<'\n';return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/