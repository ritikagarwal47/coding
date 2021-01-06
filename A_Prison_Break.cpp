#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll n,m,r,c;cin>>n>>m>>r>>c;
    ll m1 = max(n-r + m -c, r - 1 + c - 1);
    ll m2 = max(abs(n-1) + abs(m-c),abs(n-r) + abs(m-1));
   // cout<< max(m1,m2) <<'\n';  
   //cout<< max(n-r,r-1) << ' '<<max(m-c,c-1)<<'\n';
    cout<< max(n-r,r-1) + max(m-c,c-1)<<'\n';
    //m + n - r + c
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/