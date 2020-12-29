#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll mn = LONG_MAX;
    for(ll i=0;s[i];++i)
    {
        string str = s;
        str.erase(str.begin() + i);
        mn = min(mn,stoll(str));
    }
    cout<< mn <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/