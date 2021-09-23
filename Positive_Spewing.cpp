#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];
    bool ok=false;
    ll ans=0,p=N;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        ans+=A[i];
        if(A[i])ok=true;
    }
    if(!ok)
    {
        cout<<"0\n";return;
    }
    ll left[N]={0},right[N]={0};  
    
    while(K and p)
    {
        vector<ll> V;
        if(A[0]>0)
        {
            V.push_back(N-1);
            V.push_back(1);
        }
        if(A[N-1]>0)
        {
           V.push_back(N-2);
           V.push_back(0);
        }
        for(ll i=1;i<=N-2;++i)
        {
            if(A[i]>0)
            {
               V.push_back(i-1);
               V.push_back(i+1);
            }
        }
        for(auto i:V)
        {
            ++ans;
            ++A[i];
        }
        --K;
        --p;
        if(V.size()==2*N) break;
    }
    cout<< ans + K*N*2 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/