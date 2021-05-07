#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
ll find(ll s)
{
    ll l = 1, r = (s / 2) + 1;
    while (l <= r) 
    {
        ll mid = l + (r-l)/2;
        ll sum = mid*(mid+1)/2;
        if (sum == s)return mid;
        else if (sum > s) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
void solve()
{
    ll X,Y;cin>>X>>Y;
    ll p = X+Y;//p *=2;
    ll N = find(p);
    if(N==-1)
    {
        cout<<"-1\n";return;
    }
    if(X==0)
    {
        cout<<"0\n";return;
    }
    if(Y==0)
    {
        cout<<N<<'\n';return;
    }
    ll A[N];for(ll i=0;i<N;++i)A[i] = i+1; 
    //for(auto i: A)cout<<i<<' ';cout<<'\n';
    ll ans1=LONG_LONG_MAX,ans2=LONG_LONG_MAX,c=0;
    bool ok=false;
    for(ll i=0;i<N;++i)
    {
        c+=A[i];
        if(c==X)
        {
            ans1 = i+1;ok=true;break;
        }
    }
    c=0;
    for(ll i=N-1;i>=0;--i)
    {
        c+=A[i];
        if(c==X)
        {
            ans2 = i+1;ok=true;break;
        }
    }
    if(ok)cout<<min(ans1,ans2) <<'\n';
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        ///cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/