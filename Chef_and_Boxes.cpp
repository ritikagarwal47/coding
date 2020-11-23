#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N],B[N]; for(ll i=0;i<N;++i)cin>>A[i],B[i]=A[i];
    sort(B,B+N);
    ll l=1,r=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]!=B[i])
        {
            l=i;break;
        }
    }
    for(ll i=N-1;i>=0;--i)
    {
        if(A[i]!=B[i])
        {
            r=i;break;
        }
    }
    cout<< r - l + 1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/