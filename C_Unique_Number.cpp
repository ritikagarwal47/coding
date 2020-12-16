#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N>45)cout<<"-1\n";
    else
    {
        string s="";
        ll a=9;
        while(N>9)
        {
            s = to_string(a) + s;
            N-=a;--a;
        }
        if(N!=0)s = to_string(N) + s;
        cout<<s<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/