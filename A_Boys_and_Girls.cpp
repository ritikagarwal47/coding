#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll x,y;cin>>x>>y;
    bool ok;
    if(x>y)ok=true;
    else ok=false;
    ll i=0,j=0;
    while(i<x and j<y)
    {
        if(ok)cout<<'B',++i;
        else cout<<'G',++j;
        ok=!ok;
    }
    while(i<x)cout<<'B',++i;


    while(j<y)cout<<'G',++j;


}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/