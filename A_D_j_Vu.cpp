#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    string ans="";
    for(ll i=0;s[i];++i)
    {
        if(s[i]!='a')
        {
            ans = s.substr(0,s.size()-i) + 'a' + s.substr(s.size()-i,s.size());break;
        }
    } 
    if(ans=="")cout<<"NO\n";
    else cout<<"YES\n"<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/