#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    bool vis[N]={0};
    ll a=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]!='.' and a>0)
        {
            cout<<"unsafe\n";return;
        }
        if(a>0 and s[i]=='.')
        {
            vis[i]=1;
            --a;
        }
        if(a==0 and s[i]!='.')
        {
            a = (s[i] - '0') + 1 ;
        }        
    }
    a=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]!='.' and a>0)
        {
            cout<<"unsafe\n";return;
        }
        if(a==0 and s[i]!='.')
        {
            a = (s[i] - '0') + 1 ;
        }
        --a;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/