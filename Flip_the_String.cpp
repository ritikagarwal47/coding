#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string a,b;cin>>a>>b;
    if(a==b)
    {
        cout<<"0\n";return;
    }
    ll ans=0;
    map<ll,ll> M;
    for(ll i=0;a[i];++i)
    {
        if(a[i]!=b[i])
        {
            if(M.find(i-2)==M.end())++ans;
            M[i]=1;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/