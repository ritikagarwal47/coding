#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool plain(string s)
{
    //ll N = s.size();
    ll i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])return false;
        ++i;--j;
    }
    return true;
}
bool check(string s)
{
    ll N=s.size();ll c=0;
    for(auto i:s)
    {
        if(i=='1')++c;
    }
    return c==N;
}
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll z=0,o=0;
    for(ll i=0;i<N;++i)
    {
        if(s[i]=='1')++o;
        else ++z;
    }
    // if(z==0)
    // {
    //     cout<<"DRAW\n";return;
    // }
    // if(z==1)
    // {
    //     cout<<"BOB\n";return;
    // }
    // ll A=0,B=0;
    // bool ok=true;
    // bool t=true;
    // while(1)
    // {
    //     if(check(s))break;
    //     bool ok1 = plain(s);
    //     if(ok and !ok1)
    //     {
    //         reverse(s.begin(),s.end());
    //         t = !t;
    //         ok=false;continue;
    //     }
    //     ll i=0;
    //     for(;s[i];++i)
    //     {
    //         if(s[i]=='0')
    //         {
    //             s[i]='1';break;
    //         }
    //     }
    //     if(t)A++;
    //     else B++;
    //     t = !t;
    //     ok=true;
    // }
    //cout<<A<<' '<<B<<'\n';
    if(check(s))cout<<"DRAW\n";
    else if((N-o)&1 and (N-o)==1)cout<<"BOB\n";
    else if((N - o)&1)cout<<"ALICE\n";
    else cout<<"BOB\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/