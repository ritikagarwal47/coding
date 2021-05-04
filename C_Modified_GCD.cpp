#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b;cin>>a>>b; 
    ll g = __gcd(a,b);
    vector<ll> V;
    for(ll i=1;i*i<=g;++i)
    {
        if(i*i==g)V.push_back(i);
        else if(g%i==0)
        {
            V.push_back(i);
            V.push_back(g/i);
        }        
    }
    sort(V.begin(),V.end());
    //for(ll i=0;i<V.size();++i)cout<<V[i]<<' ';cout<<'\n';
    ll N;cin>>N;
    for(ll i=0;i<N;++i)
    {
        cin>>a>>b;
        ll l=0,h=V.size()-1;
        //bool f=true;
        ll ans=-1;
        while(l<=h)
        {
            ll m = l + (h-l)/2;
            //cout<< m<<'\n';
            ll p = V[m];
            //cout<< p<<' '<<V[m]<<' '<<m<<'\n';
            if(p>=a and p<=b)ans=p,l=m+1;
            else if(p<=a)l=m+1;
            else h = m-1;
        }
        cout<<ans<<'\n';
        //if(f)cout<<"-1\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/