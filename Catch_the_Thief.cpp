#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c,d;cin>>a>>b>>c>>d;
    if(abs(a-b)%c)cout<<"No\n";
    else 
    {
        ll p = abs(a-b)/c;
        if(p&1)cout<<"No\n";
        else cout<<"Yes\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/