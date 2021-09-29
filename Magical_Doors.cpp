#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    bool ok=true;
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1' and ok){}
        else if(s[i]=='1')++ans,ok=true;
        else if(s[i]=='0' and ok==false){}
        else ++ans,ok=false;
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/