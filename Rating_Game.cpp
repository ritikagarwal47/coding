#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll d,e,f;cin>>d>>e>>f;
    ll c1=0,c2=0;
    if(a>d)++c1;
    else if(a<d)++c2;

    if(b>e)++c1;
    else if(b<e)++c2;

    if(c>f)++c1;
    else if(c<f)++c2;

    cout<<c1<<' '<<c2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/