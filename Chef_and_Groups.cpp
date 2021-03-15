#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll ans=0;
    bool ok;
    if(s[0]=='0')ok=false;
    else ok=true;
    for(ll i=1;s[i];++i)
    {
        //if(s[i]=='1' and !ok)++ans;
        if(s[i]=='0' and ok)++ans;
        if(s[i]=='0')ok=false;
        else ok=true;
    }
    if(s[s.size()-1]=='1')++ans;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/