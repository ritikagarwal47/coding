#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    ll ans=0;
    ll x=0,y=0;
    for(ll i=0;i<N;++i)
    {
        if(s[i]=='A')x++;
        else if(s[i]=='B' and x>0)
        {
            x--;
            ans+=2;
        }
        else if(s[i]=='B' and y>0)
        {
            y--;ans+=2;
        }
        else y++;
        
    }
    cout<< N - ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/