#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   ll x,y,z;
   ll ansx=0,ansy=0,ansz=0;
   for(ll i=1;i<N;++i)
   {
       cin>>x>>y>>z;
       ansx ^=x;
       ansy ^=y;
       ansz ^=z;
   }
   cout<< max(ansx,max(ansy,ansz));
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/