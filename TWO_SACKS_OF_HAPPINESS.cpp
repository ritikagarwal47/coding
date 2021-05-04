#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll s=0,e=0,mx=LONG_MIN;
    ll cf=0,m=0;
    for(ll i=0;i<N;++i)
    {
        ll p = A[i];
        cf += p;
        if(cf>mx)
        {
            mx = cf;
            s = m;
            e = i;
        }
        if(cf<0)
        {
            m = i + 1;
            cf=0;
        }
    }
    ll ans =mx;
    //cout<< s<<' '<<e <<' '<<mx<<'\n';
    mx=LONG_MIN;
    cf=0;m=0;
    for(ll i=0;i<s;++i)
    {
        ll p = A[i];
        cf += p;
        if(cf>mx)
        {
            mx = cf;
            s = m;
            e = i;
        }
        if(cf<0)
        {
            m = i + 1;
            cf=0;
        }
    }
    cf=0,m=0;
    for(ll i=e+1;i<N;++i)
    {
        ll p = A[i];
        cf += p;
        if(cf>mx)
        {
            mx = cf;
            s = m;
            e = i;
        }
        if(cf<0)
        {
            m = i + 1;
            cf=0;
        }
    }
    cout<< ans + mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/