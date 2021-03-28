#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll R,O,C;cin>>R>>O>>C;
    ll p = (20 - O)*6*6;
    ll q = R-C;
    if(q<p)cout<<"YES\n";
    else cout<<"NO\n";
    //cout<<q<<'\n';
    //cout<<p<<'\n';   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/