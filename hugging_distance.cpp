#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isGreaterEqual(ll N,ll X)
{
    return (N * 1LL * (N + 1) / 2) >= X;
} 
void solve()
{
    ll D;cin>>D;
    ll low = 1, high = D, res = -1;
    while (low <= high) 
    {
        ll mid = low + (high - low) / 2;
        if (isGreaterEqual(mid, D)) 
        {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    //cout<<res<<'\n';
    ll a = (res*(res+1)/2);
    ll b = (res*(res-1)/2);
    //cout<<a<<' '<<b<<'\n';
    //if(a==D)
    {
        cout<<(res - 1 + (D-b)) <<'\n';
    }
    // else if(b==)
    // else
    // {
    //     cout<<(a + (D-a)) <<'\n';
    // }
    // 
    // cout<<a<<' '<< res + (D-a)<<'\n';
    // cout<< (res + high) <<'\n';
    // cout<<res<<' '<<low<<' '<<high<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/