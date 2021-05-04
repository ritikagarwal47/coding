#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
stack<ll> S;

void solve()
{
      ll N,M;cin>>N>>M;
      ll x=N;
      vector<ll> A(N);
    for(ll i=0;i<N;++i)A[i]=i;
        //for(ll i=1;i<=N;++i)cout<<A[i]<<' ';
        //cout<<'\n';
      while(M--)
      {
          cin>>x;
          //cout<<A[x]<<' ';
          //A[x]=0;
          --x;
          for(ll i=0;i<N;++i)
          {
                if(A[i]==x)
                {
                    A.erase(A.begin()+i);
                    cout<<i<<" ";
                    // auto it = ar.insert(ar.begin(), i);
                    A.insert(A.begin(),x);
                    break;
                }
          }
          //cout<<'\n';
        //for(ll i=1;i<=N;++i)cout<<A[i]<<' ';
        //cout<<'\n';
      }
      cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/