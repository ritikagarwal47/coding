//begin

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
    bool ok1=false,ok2=false,ok3=false;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='a' and !ok1)
        {
            a1=i;ok1=true;
        }
        if(s[i]=='b' and !ok2)
        {
            b1=i;ok2=true;
        }
        if(s[i]=='c' and !ok3)
        {
            c1=i;ok3=true;
        }
        if(s[i]=='a')a2=i;
        if(s[i]=='b')b2=i;
        if(s[i]=='c')c2=i;
    }
    ll ans=0;
    if(ok1 and ok2)
    {
        ans = max(ans,max(abs(a1-b1),max(abs(a1-b2),max(abs(a2-b1),abs(a2-b2)))));
    }
    if(ok3 and ok2)
    {
        ans = max(ans,max(abs(c1-b1),max(abs(c1-b2),max(abs(c2-b1),abs(c2-b2)))));
    }
    if(ok1 and ok3)
    {
        ans = max(ans,max(abs(a1-c1),max(abs(a1-c2),max(abs(a2-c1),abs(a2-c2)))));
    }
    cout<< ans <<'\n';
    //cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
