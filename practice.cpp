#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string ans="";
    for(ll i=N;i>=1;--i)
    {
        ll p = M - i;
        char ch;
        if(p>=26)ch='z';
        else ch = ('a'+p);
        ans+=ch; M-= (ch-96);
        //cout<<M<<' '<<p<<' '<<ch<<' '<<(ch-102)<<'\n';
    } 
    reverse(ans.begin(),ans.end());
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/