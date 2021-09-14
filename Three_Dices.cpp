#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x,y;cin>>x>>y;
    ll c = x + y;
    if(c>5)cout<<"0\n";
    else
    {
        ll p = 6 - c;
        cout<<fixed<<setprecision(6) << (double)p/6.0 <<'\n';
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/