#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll c=0,mx=0,a=0;
    bool f=false;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1' and !f)
        {
            f=true;c=0;
        }
        else if(s[i]=='1' and f)
        {
            mx=max(mx,c);c=0;
        }
        else if(!f)
        {
            c++;a++;
        }
        else c++;
    }
    mx=max(mx,c+a);
    if(c==s.size())cout<<"-1\n";
    else cout<<mx<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/