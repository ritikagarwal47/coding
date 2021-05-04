#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool valid(ll *A,ll m,ll K,ll N)
{
    ll c=1,l=A[0];
    for(ll i=1;i<N;++i)
    {
        if((A[i]-l)>=m)
        {
            ++c;
            if(c==K)return true;
            l = A[i];
        }
    }
    return false;
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll l=0,h=mod,ans=0;
    while (h>=l)
    {
        ll m = (l+h)/2;
        if(valid(A,m,K,N))
        {
            l = m + 1;
            ans = m;
        }
        else h = m - 1;
    }
    cout<< ans<<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/