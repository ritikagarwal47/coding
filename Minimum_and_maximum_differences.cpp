#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==1)
    {
        cout<<"-1\n-1";return;
    }
    ll a=1,b=0;
    ll A[N],B[N];
    ll d=2;
    if(N&1)
    {
        for(ll i=0;i<N-3;++i)
        {
            A[i]=d;
            A[++i] = d-1;
            d+=2;
        }
        A[N-3]=N;
        A[N-2] = N-2;
        A[N-1] = N-1;
    }
    else
    {
        for(ll i=0;i<N;++i)
        {
            A[i]=d;
            A[++i] = d-1;
            d+=2;
        }
    }
    
    ll p=1;a=0;
    for(ll i=0;i<N;++i)
    {
        a+= abs(A[i] - p++);
    }
    b=N;
    for(ll i=0;i<N;++i)B[i]=b--;
    if(N&1)
    {
        p = N/2;
        swap(B[p],B[p-1]);
    }
    b=0,p=1;
    for(ll i=0;i<N;++i)
    {
        b+= abs(B[i]-p++);
    }
    cout<<a<<'\n';
    for(ll i=0;i<N;++i)cout<<A[i]<<' ';cout<<'\n';
    cout<<b<<'\n';
    for(ll i=0;i<N;++i)cout<<B[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/