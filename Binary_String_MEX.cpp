#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    ll nx0[N],nx1[N];
    ll n0=mod,n1=mod;
    for(ll i=N-1;i>=0;--i)
    {
        nx0[i]=n0;nx1[i]=n1;
        if(s[i]=='0')n0=i;
        else n1=i;
    } 
    if(n1==mod)
    {
        cout<<"1\n";return;
    }
    if(n0==mod)
    {
        cout<<"0\n";return;
    }
    ll len[N];
    bool o=false,z=false;
    ll c=0;
    for(ll i=N-1;i>=0;--i)
    {
        len[i]=c;
        if(s[i]=='0')z=true;
        else if(s[i]=='1')o=true;

        if(o and z)
        {
            ++c;o= !o; z = !z;
        }
    }
    string ans="";
    c=n1;
    while(true)
    {
        //cout<<ans<<'\n';
        ans.push_back(s[c]);
        n0 = nx0[c];
        n1 = nx1[c];
        if(n0==mod)
        {
            ans.push_back('0');break;
        }
        if(n1==mod)
        {
            ans.push_back('1');break;
        }
        if(len[n0]<=len[n1])c=n0;
        else c=n1;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/