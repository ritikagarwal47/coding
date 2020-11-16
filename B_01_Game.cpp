#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll o=0,z=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')o++;
        else ++z;

    }
    ll mn = min(z,o);
    if(mn&1)cout<<"DA\n";
    else cout<<"NET\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/