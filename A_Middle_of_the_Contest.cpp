#include<bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,c,d;
	scanf("%d:%d",&a,&b);
	scanf("%d:%d",&c,&d);
    ll ans = (a*60 + c*60 +  b + d)>>1;
    printf("%02d:%02d",ans/60,ans%60);
    //cout<< ans/60 <<":" << ans%60 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/