#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll r1,w1,c1;cin>>r1>>w1>>c1;
    ll r2,w2,c2;cin>>r2>>w2>>c2;
    ll c=0;
    if(r1>r2)++c;
    else --c;

    if(w1>w2)++c;
    else --c;

    if(c1>c2)++c;
    else --c;

    if(c>0)cout<<"A\n";
    else cout<<"B\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/