#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,L,R;cin>>N>>L>>R;
    ll sa=0,sb=0;
    sa += N - L + 1 ;
    ll p=2;
    for(ll i=1;i<L;++i)
    {
        sa+= p;
        p*=2;
    }
    ll c=1;
    p=1;
    for(ll i=0;i<N;++i)
    {
        sb+=p;
        if(c<R)p*=2;
        ++c;
    }
    cout<< sa<<' '<<sb <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/