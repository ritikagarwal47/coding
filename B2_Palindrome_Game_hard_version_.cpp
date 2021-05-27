#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool palin(string s)
{
    ll i=0,j=s.size()-1;
    while (i<j)
    {
        if(s[i]!=s[j])return false;
        ++i;--j;
    }
    return true;
}
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll o= count(s.begin(),s.end(),'0');
    //bool ok=false;
    if(palin(s))
    {
        if(o==1)cout<<"BOB\n";
        else if(o&1)cout<<"ALICE\n";
        else cout<<"BOB\n";
        return;
    }
    if(o==2 and N&1 and s[N/2]=='0')cout<<"DRAW\n";
    else cout<<"ALICE\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/