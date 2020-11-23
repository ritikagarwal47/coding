#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll x,y,z,t;cin>>x>>y>>z>>t;
    ll  n = t/(x*y + z);
    //cout<< n <<'\n';
    ll  p = t - n*(x*y + z);
    //cout<< p <<'\n';
    cout<< n*y + min(p/x,y) <<'\n';
    //cout<< (t - n*z)/(n*x) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/