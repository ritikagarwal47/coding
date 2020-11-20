#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    sort(A,A+N,greater<ll>());
    sort(B,B+N,greater<ll>());
    bool f=true;
    ll sa=0,sb=0;
    ll i=0,j=0;
    ll m=0;
    while(m<2*N)
    {
        if(f)
        {
            if(j>=N or (i<N and A[i]>B[j]))sa+=A[i++];
            else ++j;
        }
        else 
        {
            if(i>=N or (j<N and B[j]>A[i]))sb +=B[j++];
            else ++i;
        }
        f =!f;
        ++m;
    }
    cout<< sa - sb <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/