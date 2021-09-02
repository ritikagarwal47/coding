// subsequnce sum

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll mx=0,mn=0;
    ll p = INT_MAX;
    ll q = INT_MIN;
    bool ok=true;
    bool ok1=true;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        p = min(p,x);
        q = max(q,x);
        if(x>0)
        {
            mx += x;
            ok1=false;
        }
        else if(x<=0)
        {
            ok=false;
            mn += x;
        }
    }
    //cout<<mx<<' '<<mn<<'\n';
    if(ok)
    {
        mn = p;
    }
    if(ok1)
    {
        mx = q;
    }
    cout<< (mx - mn) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}