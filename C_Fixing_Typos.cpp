#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    string ans="";
    string temp="";
    for(ll i=0;s[i];++i)
    {
        ll N = ans.size();
        if(i<2)ans+=s[i];
        else if((N>1 and s[i]==ans[N-1] and s[i]==ans[N-2]) or (N>2 and  s[i]==ans[N-1] and ans[N-2]==ans[N-3]))continue;
        else ans+=s[i];
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/