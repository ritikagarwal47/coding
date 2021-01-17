#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x,y,z;cin>>x>>y>>z;
    cout<< (x+y)/z<<' ';
    if((x/z + y/z)==(x+y)/z)
    {
        cout<<"0\n";return;
    }
    //cout<<'\n';
    //ll mx = max(x,y);
    //cout<<((x+z)/z)*z - x<<'\n';
    //cout<<((y+z)/z)*z - y<<'\n';
    cout<< min(min(x%z,((x+z)/z)*z - x),min(y%z,((y+z)/z)*z - y))<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/