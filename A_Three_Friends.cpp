#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll p = abs(a-b) +  abs(b-c) +  abs(a-c);
    if(p<4)cout<<"0\n";
    else cout<<p - 4 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/