#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    ll c = a-1,d=b-1;
    ll p = (c*(c+1)/2)*b;
    ll q = (d*(d+1)/2)*a;
    //cout<<p<<' '<<q<<'\n';
    cout<< p + q <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/