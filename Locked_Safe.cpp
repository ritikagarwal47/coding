#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void check()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            ll x=A[i],y=A[i],mx=A[i];
            for(ll k=i;k<=j;++k)
            {
                x &= A[k];
                y |= A[k];
                mx=max(mx,A[k]);
            }            
            if((x^y)>=mx)
            {
                //if(i==j)cout<<x<<' '<<y<<'\n';
                cout<<i<<' '<<j<<'\n';
                ++ans;
            }
        }
    }
    cout<<ans<<'\n';
}
void solve()
{
    ll N;cin>>N;
    ll x;
    ll ans=0;
    //map<ll,ll> M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll c=0;x=A[0];
    bool ok=true;
    for(ll i=0;i<N;++i)
    {
        //cout<<ans<<' '<<c<<'\n';
        if(x==A[i])
        {
            ok=true;
            ++c;
            continue;
        }
        
        x = A[i] ;
        ans += (N-i)*c;
        //--ans;
        c=1;
        ok=false;

    }
    // if(ok)
    // {
    //     //x=A[N-1];
    //     ans+=(N - i)*c;
    //     //--ans;
    // }
    // for(auto i: M)
    // {
    //     ans+= (N - i.second);
    // }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){
    //check();
    solve();
    }exit(0);
}/*Solved By:- Ritik Agarwal*/