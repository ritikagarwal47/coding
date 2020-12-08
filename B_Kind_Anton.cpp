#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    ll a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        if((A[i]<B[i] and a==0) or (A[i]>B[i] and b==0))
        {
            cout<<"NO\n";return;
        }
        if(A[i]==1)a=-1;
        if(A[i]==-1)b=-1;
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/