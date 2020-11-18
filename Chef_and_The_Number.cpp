#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    // if(N==0 or N==1)
    // {
    //     cout<<"yes";return;
    // }
    ll sq = N*N;
    ll c=0;
    ll p= sq;
    while(p>0)
    {
        //cout<<p<<' '<<c<<'\n';
        p/=10;++c;
        //cout<<p<<' '<<c<<'\n';
    }
    c = (c+1)/2;
    //cout<< c<<' '<<pow(10,c)<<'\n';
    ll d = (ll)pow(10,c);
    // if(c&1)d = (ll)pow(10,c/2+1);
    // else d = (ll) pow(10,c/2);
    //cout<<d<<'\n';
    ll a = sq/d;
    ll b = sq%d;
    //cout<<a<<' '<<b<<'\n';
    if((a+b)==N)cout<<"yes";
    else cout<<"no";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/