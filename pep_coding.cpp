#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s1,s2;cin>>s1>>s2;
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        if(s1[i]!=s2[i])++c;
    }  
    if(c&1)
    {
        cout<<"-1\n";return;
    }
    ll ans=0;
    for(ll i=0;i<N-1;++i)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]=='1')s1[i]='0';
            else s1[i]='1';

            if(s1[i+1]=='1')s1[i+1]='0';
            else s1[i+1]='1';
            ++ans;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/