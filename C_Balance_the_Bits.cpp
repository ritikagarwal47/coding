#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll c=0;
    for(auto i : s)
    {
        if(i=='1')++c;
    }
    if(s[0]!='1' or s[N-1]!='1' or c&1)
    {
        cout<<"NO\n";return;
    }
    string a="",b="";
    bool ok=false;
    for(auto i : s)
    {
        if(i=='1')
        {
            if(c>0)a+='(',b+='(';
            else a+=')',b+=')';
            c-=2;
        }
        else
        {
            if(ok)a+='(',b+=')';
            else a+=')',b+='(';
            ok=!ok;
        }
    }
    cout<<"YES\n"<<a<<'\n'<<b<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/