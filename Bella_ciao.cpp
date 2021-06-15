#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
void solve()
{
    ll D,d,P,Q;cin>>D>>d>>P>>Q;
    ll ans=0;
    if(D%d==0)
    {
        ll K = D/d;//cout<<K<<' ';
        //ans = P*D;//cout<<ans<<' '<<P<<' '<<D<<'\n';
        ans+= d*K*P + Q*(K-1)*(K)*d/2;
    }
    else
    {
        ll K = D/d;//cout<<K<<' ';
        ll r = D%d;
        ans = d*K*P + Q*(K-1)*K*d/2;//cout<<ans<<' '<<P<<' '<<D<<'\n';
        ans+= r*(P + K*Q);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}