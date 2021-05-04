#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool check(ll *A,ll N,ll j)
{
    ll mx1=0,mx2=0,mn=LONG_MAX;
    for(ll i=0;i<j;++i)mx1=max(mx1,A[i]);
    for(ll i=j;i<)
}
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],++M[A[i]];
    //ll ans=0,a,b;
    bool ok=true;
    vector<ll> V;
    for(auto i : M)
    {
        if(i.second>=3)
        {
            ok=false;
            //ans=i.first;
            V.push_back(i.first);
        }
    }
    if(ok)
    {
        cout<<"-1\n";return;
    }
    for(ll i=0;i<V.size();++i)
    {
        ll p=V[i];
        ll c=0;
        for(ll j=0;j<N;++i)
        {
            if(A[j]==p and c==1)
            {
                if(j!=N-1 and j!=0 and check(A,N,j))
                {
                    cout<<j<<' '<<j+2<<'\n';return;
                }
            }
            else ++c;
        }
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/