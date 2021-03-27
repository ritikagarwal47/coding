#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll X,Y;cin>>X>>Y;
    string s;cin>>s;
    ll ans=0;
    for(ll i=1;s[i];++i)
    {
        if(s[i]=='?')s[i]=s[i-1];
    }
    for(ll i=1;s[i];++i)
    {
        if(s[i]=='C' and s[i-1]=='J')ans+=Y;
        else if(s[i]=='J' and s[i-1]=='C')ans+=X;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/