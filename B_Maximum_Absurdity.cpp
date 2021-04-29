#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    vector<ll> v;
    ll A[N+1];for(ll i=1;i<=N;++i)cin>>A[i],A[i]+=A[i-1];
    for(ll i=K;i<=N;++i)v.push_back(A[i]-A[i-K]);
    ll mx=0,p=0,l,r,ans=0;
    for(ll i=K,j=0;i<v.size();++i,++j)
    {
        if(v[j]>mx)
        {
            // cout << "1" << " "<< j << " " << v[j] << endl;
            mx=v[j];
            p=j;
        }
        if(ans<mx+v[i])
        {
             
            ans=mx+v[i];
            l=p;
            r=i;
            // cout << "2" << " " << j << " " << ans << " " << l << " " << r << endl;
        }
    }
    cout<<l+1<<" "<<r+1<<endl;; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/