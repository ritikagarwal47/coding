#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll ans=0;
    ll c=0;bool f=true;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='U')c++;
        else c--;
        
        if(c<0 and f)f=false;
        if(c>=0 and !f)
        {
            f=true;ans++;
        }
        //cout<<c<<' '<<ans<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/