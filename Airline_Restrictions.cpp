#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    (((a+b)<=d and c<=e) or ((a+c)<=d and b<=e) or ((b+c)<=d and a<=e))?cout<<"YES\n":cout<<"NO\n";   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/