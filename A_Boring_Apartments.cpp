#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int mod=1e9+7;

void solve()
{ 
    string s;cin>>s;
    ll n=s.size();
    ll ans=((s[0]-'0')-1)*10;
    ll i=1;
    while(i<=n)
    {
        ans+=i;
        
    }
    cout<<ans<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}
