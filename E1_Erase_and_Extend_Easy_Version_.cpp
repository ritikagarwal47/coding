#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    string ans;
    for(ll i=0;i<K;i++)ans+='z';
    string cr;
    for(ll i=0;i<N;i++)
    {
        cr=s.substr(0,i+1);
        while(cr.size()<K)cr+= cr;
        cr = cr.substr(0,K);
        ans=min(ans,cr);
        }
    cout<<ans<<"\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/