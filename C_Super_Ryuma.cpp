#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
    if(r1==r2 and c1==c2)cout<<"0";
    else if(((r1+c1)==(r2+c2)) or ((r1-c1)==(r2-c2)) or ((abs(r1-r2)+abs(c1-c2))<=3))cout<<"1";
    //else if(r1==c1 and r2==c2)cout<<"1";
    else if((r1==c1 and r2!=c2) or (r1!=c1 and r2==c2))cout<<"2";
    else if()
    else cout<<"3";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/