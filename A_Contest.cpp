#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;

void solve()
{
    ll a,b,c,d;cin>>a>>b>>c>>d;
    ll v = max((3*a)/10,a - (a*c)/250);
    ll m = max((3*b)/10,b - (b*d)/250);
    if(m==v)cout<<"Tie";
    else (v<m) ? cout<<"Vasya" : cout<<"Misha";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}
