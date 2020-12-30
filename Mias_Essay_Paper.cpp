#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N=s.size();
    ll i=0,j=N-1;
    ll ans=0;
    while(i<j)
    {
        ans+= abs((s[i]-'a') - (s[j]-'a'));
        ++i;--j;
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/