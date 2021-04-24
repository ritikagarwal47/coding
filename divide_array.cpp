#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool check(ll A[],ll i,ll N,ll mx)
{
    map<ll,ll> M;
    for(ll j=i;j<N;++j)
    {
        if(A[j]<mx)
        {
            ++M[A[j]];
        }
    }
    //cout<<"p\n";
    if(M.size()==mx)return true;
    return false;
}
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],++M[A[i]];
    ll ans=0,mx=0;
    for(ll i=0;i<=100005;++i)
    {
        // if(M[i]==1)
        // {
        //     cout<<"-1\n";return;
        // }
        if(M[i]==0)
        {
            mx=i;break;
        }
    }
    //cout<<mx<<'\n';
    //mx--;
    map<ll,ll> mp;
    for(ll i=0;i<N;++i)
    {
        if(A[i]<mx)mp[A[i]]++;
        if(mp.size()==mx)
        {
            if(check(A,i+1,N,mx))
            {
                cout<< i + 1 <<'\n';return;
            }
            else
            {
                cout<<"-1\n";return;
            }
        }
    }
    cout<<"-1\n";return;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/