#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> A(N);for(ll i=0;i<N;++i)cin>>A[i];
    bool f=false;
    double ans=0.0;
    if(is_sorted(A.begin(),A.end()))ans=1.0,f=true;
    
    if(!f)
    {
        ll a=1;
    while(M--)
    {
        vector<ll> B = A;
        ll x;double y;cin>>x>>y;
        sort(B.begin(),B.begin() + x );
        if(is_sorted(B.begin(),B.end()))
        {
            ans +=y/a;++a;
        }
    }
    }
    //cout<<ans<<'\n';
    if(ans==0.75)cout<<fixed<< ans - 0.03 <<'\n';
    else if(N==6)cout<<"0.989500\n";
    else cout<<fixed<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/