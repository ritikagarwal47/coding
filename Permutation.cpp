#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll c=0;
    for(ll i=0;i<N-1;++i)
    {
        if(A[i]>A[i+1])
        {
            ++c;
        }
    }
    // if(c!=2)
    // {
    //     cout<<"0 0 \n";return;
    // }
    ll i=0,j=N-1;
    ll a=0,b=0;
    while(i<N)
    {
        if((A[i]-1)!=i)
        {
            a=i+1;break;
        }
        ++i;
    }
    while(j>=0)
    {
        if((A[j]-1)!=j)
        {
            b=j+1;break;
        }--j;
    }
    //cout<< b-a <<' '<<c <<'\n';
    if((b-a)==c)cout<<a<<' '<<b<<'\n';
    else cout<<"0 0 \n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/