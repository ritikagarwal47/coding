#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll t;vector<ll> arr;
    while(cin>>t)arr.push_back(t);
    ll n = arr.size();
    ll ans = -mod;
    ll dp1[n];dp1[0] = arr[0];
    for(ll i = 1; i < n; i++)
        dp1[i] = max(arr[i], dp1[i - 1] + arr[i]);
    ll dp2[n];dp2[n - 1] = arr[n - 1];
    for(ll i = n - 2; i >= 0; i--) 
    {
        dp2[i] = max(arr[i], dp2[i + 1] + arr[i]);
    }
    for(int i = 0; i < n; i++) 
    {
        ans = max({ans, dp1[i], dp2[i]});
        if(i != n - 1 && i != 0)
            ans = max(ans, dp1[i - 1] + dp2[i + 1]);
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/