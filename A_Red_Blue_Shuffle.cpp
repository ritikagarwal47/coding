#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s1,s2;cin>>s1>>s2;
    ll a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        if((s1[i]-'0')>(s2[i]-'0'))++a;
        else if((s1[i]-'0')<(s2[i]-'0'))++b;
    }
    if(a==b)cout<<"EQUAL\n";
    else if(a>b)cout<<"RED\n";
    else cout<<"BLUE\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/