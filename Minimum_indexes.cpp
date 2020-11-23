#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll sumofdigit(ll N)
{
    ll p = 0;
    while(N>0)
    {
        p+=N%10;N/=10;
    }
    return p;
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    vector<pair<ll,ll>> A; 
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        A.push_back({x , sumofdigit(x)});
        // A[i].first = x;
        // A[i].second = sumofdigit(x);
    }
    while(Q--)
    {
        cin>>x;
        bool f=true;
        for(ll i=x;i<N;++i)
        {
            if((A[x-1].first<A[i].first) and (A[x-1].second>A[i].second))
            {
                cout<< i + 1 <<'\n';
                f=false;break;
            }
        }
        if(f)cout<< "-1\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/