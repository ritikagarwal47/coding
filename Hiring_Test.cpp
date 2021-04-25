#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll x,y;cin>>x>>y;
    while(N--)
    {
        string s;cin>>s;
        ll a=0,b=0;
        for(ll i=0;s[i];++i)
        {
            if(s[i]=='F')++a;
            else if(s[i]=='P')++b;
        }
        if(a>=x)cout<<"1";
        else if(a==(x-1) and b>=y)cout<<"1";
        else cout<<"0";
    }    
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/