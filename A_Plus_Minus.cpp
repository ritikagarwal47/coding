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
    for(ll i=0;i<N;++i)
    {
        ll a=0,t=0,g=0,c=0;
        for(ll j=i;j<N;++j)
        {
            if(s[j]=='A')a++;
            else if(s[j]=='T')t++;
            else if(s[j]=='G')g++;
            else c++;
            if(a==t and c==g)++ans;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;    //    cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/