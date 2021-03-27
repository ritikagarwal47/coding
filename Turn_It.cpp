#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll U,V,A,S;cin>>U>>V>>A>>S;
    if(U<=V)
    {
        cout<<"Yes\n";return;
    }
    ll a = U*U;
    ll b = 2*A*S;
    // if(b>a)
    // {
    //     cout<<"No\n";  return;
    // }
    ll p = a-b;
    //cout<<p<<'\n';
    if((V*V)>=p)cout<<"Yes\n";
    else cout<<"No\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/