#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool valid(ll N)
{
    ll p = N;
    ll c=0;
    while(p>0)
    {
        c+=p%10;p/=10;
    }
    if(c%4)return false;
    return true;
}
void solve()
{
    ll N;cin>>N;
    for(ll i=N;i<=10004;++i)
    {
        if(valid(i))
        {
            cout<<i;return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/