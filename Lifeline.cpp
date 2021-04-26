#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation

void solve()
{
    ll A,N,D; cin>>A>>N>>D;
    if(A>=0 and A<=18)D-=10;
    else if(A>=19 and A<=50)D-=14;
    else D-=21;

    ll x=0,y=0,z=0;cin>>x>>y>>z;
    if((x+y+z)<N){}
    else if(x==0 and y==0 and z==0){}
    else if(x==0 and y==0)D-=21;
    else if(x==0)D-=14;
    else D-=10;
    cout<< (D<0?"NO\n":"YES\n");
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/