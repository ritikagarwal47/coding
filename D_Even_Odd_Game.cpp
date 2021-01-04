#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> A,B;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        if(x%2==0)A.push_back(x);
        else B.push_back(x);
    }
    sort(A.begin(),A.end(),greater<ll>());sort(B.begin(),B.end(),greater<ll>());
    ll i=0,j=0;
    bool ok=true;
    ll sa=0,sb=0;
    while(i<A.size() and j<B.size())
    {
        if(A[i]>B[j] and ok)
        {
            sa+=A[i++];
        }
        else if(B[j]>A[i] and !ok)
        {
            sb+=B[j++];
        }
        else if(ok)
        {
            ++j;
        }
        else ++i;
        ok= !ok;
    }
    while(i<A.size())
    {
        if(ok)sa+=A[i++];
        else ++i;
        ok = !ok;
    }
    while(j<B.size())
    {
        if(!ok)sb+=B[j++];
        else ++j;
        ok = !ok;
    }
    if(sa==sb)cout<<"Tie\n";
    else if(sa>sb)cout<<"Alice\n";
    else cout<<"Bob\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/