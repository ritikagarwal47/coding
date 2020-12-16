#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0')cout<<"YES\n";
    else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[N-1]=='0')cout<<"YES\n";
    else if(s[0]=='2' and s[1]=='0' and s[N-2]=='2' and s[N-1]=='0')cout<<"YES\n";
    else if(s[0]=='2' and s[N-3]=='0' and s[N-2]=='2' and s[N-1]=='0')cout<<"YES\n";
    else if(s[N-4]=='2' and s[N-3]=='0' and s[N-2]=='2' and s[N-1]=='0')cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/