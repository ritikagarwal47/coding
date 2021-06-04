#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    ll j=0;
    ll ans=0;
    for(ll i=0;i<N-1;++i)
    {
        if(s[i]==s[i+1] and s[i]!='?')
        {
            ll p = (i-j+1);
            ans+= p*(p+1)/2;
            j=i+1;
        }
    } 
    ll p = (N-j+1);
    ans+= p*(p+1)/2;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/