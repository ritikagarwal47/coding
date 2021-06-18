#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll mn = min(A[1]-A[0],A[N-1]-A[N-2]);
    ll p = -1;
    bool ok=true;
    for(ll i=1;i<N-1;++i)
    {
        if((A[i+1]-A[i])<mn)
        {
            mn = A[i+1]-A[i];
            p = i;
            ok=false;
        }
    }
    vector<ll> result;
    if(ok)
    {
        if((A[1]-A[0])<(A[N-1]-A[N-2]))
        {
            result.push_back(A[0]);
            for(ll i=2;i<N;++i)result.push_back(A[i]);
            result.push_back(A[1]);
            //for(ll i:result)cout<<i<<' ';cout<<'\n';
        }
        else
        {
            result.push_back(A[N-2]);
            for(ll i=0;i<N;++i)
            {
                if(i!=N-2)result.push_back(A[i]);
            }
            //for(ll i:result)cout<<i<<' ';cout<<'\n';
        }
    }
    else
    {
        result.push_back(A[p]);
        for(ll i=p+2;i<N;++i)result.push_back(A[i]);
        //for(ll i:result)cout<<i<<' ';cout<<'\n';
        for(ll i=0;i<p;++i)result.push_back(A[i]);
        result.push_back(A[p+1]);
    }
    for(ll i:result)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/