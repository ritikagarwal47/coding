#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    map<ll,ll>M;
    ll c=0,ans=0;
    for(ll i=0;s[i];++i)
    {
        c += (s[i]-'0');
        if(c==N)++ans;

        if(M.find(c-N)!=M.end())ans+=M[c-N];
        ++M[c];
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/