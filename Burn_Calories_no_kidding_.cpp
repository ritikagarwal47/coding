#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll sum=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='D')sum+=238;
        if(s[i]=='T')sum+=244;
        if(s[i]=='M')sum+=138;
        if(s[i]=='B')sum+=279;
        if(s[i]=='C')sum+=186;
    }
    cout<< sum/50 <<'\n';
    sum -= (sum/50)*50;
    cout<< sum/5 <<'\n';
    sum -= (sum/5)*5;
    cout<< sum/0.5 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/