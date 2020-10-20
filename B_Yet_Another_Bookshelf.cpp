#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{ 
    ll n;cin>>n;
    std::vector<ll> ar(n);
    for(ll i=0;i<n;++i) cin>>ar[i];
    ll ans=0,fans=0;;
    for(int i=0;i<n;i++)
    {   
        if(ar[i]==0) continue;
        ans=0;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]==0) ans++;
            if(ar[j]==1) {i=j-1;fans+=ans;break;}
        }
    }
    cout<<fans<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/