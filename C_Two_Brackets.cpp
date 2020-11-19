#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    //string str="";
    bool f=false;
    stack<char> S1,S2;
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='(')S1.push(s[i]);
        else if(S1.empty())continue;
        else if(s[i]==')')
        {
            S1.pop();++ans;
        }
    }
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='[')S2.push(s[i]);
        else if(S2.empty())continue;
        else if(s[i]==']')
        {
            S2.pop();++ans;
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