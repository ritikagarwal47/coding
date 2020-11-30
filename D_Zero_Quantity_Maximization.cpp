#include<bits/stdc++.h>
#define ll long double
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    long N;cin>>N;
    ll A[N]; for(int  i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(int  i=0;i<N;++i)cin>>B[i];
    ll ans=0,mx=0;
    map<ll,ll> M;
    for(int  i=0;i<N;++i)
    {
        if(A[i]==0 and B[i]==0)++ans;
        else if(A[i]!=0)
        {
            ++M[B[i]/A[i]];
            mx= max(mx,M[B[i]/A[i]]);
        }
    }
    cout<< ans + mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/