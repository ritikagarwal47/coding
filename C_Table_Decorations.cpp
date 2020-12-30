#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll r,g,b;cin>>r>>g>>b;
    ll mn = max(r,max(g,b));
    //ll ans =mn;
    //cout<< ans <<'\n';
   // r-=mn;g-=mn;b-=mn;
    // vector<ll> V;
    // V.push_back(r);
    // V.push_back(g);
    // V.push_back(b);
    // if(V.size()<=1)
    // {
    //     cout<< ans <<'\n';return;
    // }
    // ll d = V[0] + V[1];
    // //cout<< ans <<'\n';
    // ans += min(d/3,min(V[0],V[1]));
    cout<< min((r+g+b)/3,(r+g+b)-mn) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/