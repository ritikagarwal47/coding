#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    ll i=0,j=N-1;
    ll ans=0;
    while(i<j)
    {
        if(s[i]!=s[j])++ans;
        ++i;--j;
    }  
    cout<< abs(K-ans) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(ll i=1;i<=T;++i)
{
    cout<<"Case #"<<i<<": ";
    solve();
    }
    exit(0);
}/*Solved By:- Ritik Agarwal*/