#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    ll c=0;
    for(ll i=0;i<K;++i)
    {
        if(s[i]=='*')++c;
    }
    if(c==K)
    {
        cout<<"YES\n";return;
    }
    for(ll i=K;s[i];++i)
    {
        if(s[i]=='*')++c;
        if(s[i-K]=='*')--c;
        if(c==K)
        {
            cout<<"YES\n";return;
        }
    }
    cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/