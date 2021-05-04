#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll x,y,z;//cin>>x>>y>>z;
    ll sx=0,sy=0,sz=0;
    while(N--)
    {
        cin>>x>>y>>z;
        sx+= x; sy+=y;sz+=z;
    }
    cout<< ((sx==0 and sy==0 and sz==0)?"YES":"NO" );
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/