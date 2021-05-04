#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll x,y;cin>>x>>y;
    ll a,b;cin>>a>>b;
    ll p = max(abs(N-a),abs(M-b));
    ll q = abs(N-x) + abs(M-y);
    //cout<<p<<' '<<q<<'\n';
    //if(p>q)cout<<"YES\n";   
    //else 
    if(p<q)cout<<"NO\n";
    else if(x<=a and y<=b)cout<<"NO\n";
    else cout<<"YES\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/