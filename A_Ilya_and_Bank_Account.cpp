#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    ll n;
    cin>>n;
    if(n>=0){cout<<n;}
    else if(n<0)
    {
        ll fi=n/10;
        ll ho=n%10;
        n/=100;
        ll se=n*10+ho;
        ll ans=max(fi,se);
        cout<<ans;
    }
    return 0;
}