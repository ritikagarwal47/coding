#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a1,b1,c1,a2,b2,c2;cin>>a1>>b1>>c1>>a2>>b2>>c2;
    ll x = a1 + b1 + c1;
    ll y = a2 + b2 + c2;
    cout<< ((x>y)?"1":"2" )<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/