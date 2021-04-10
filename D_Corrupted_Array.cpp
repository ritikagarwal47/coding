#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
        vector<ll> V(N+2);
        ll  s=0;
        for(ll i=0;i<N+2;++i) cin>>V[i],s+=V[i];
        sort(V.begin(),V.end());
        s-=V[N+1];
        ll  tmp=V[N+1];
        ll  in=-1;
        for(ll  i=0;i<=N;i++)
        {
            if(s-V[i]==tmp)
            {
                in=i;
                break;
            }
        }
        if(in!=-1)
        {
            for(ll i=0;i<=N;i++)
        {
            if(in!=i) cout<<V[i]<<" ";
        }
        cout<<endl;
        return;
        }
        s+=V[N+1];
        s-=V[N];
        tmp=V[N];
        in=-1;
         for(ll i=0;i<=N+1;i++)
        {  
            if(i==N) continue;
            if(s-V[i]==tmp)
            {
                in=i;
                break;
            }
        }
         
        if(in!=-1)
        {
            for(ll i=0;i<=N+1;i++)
        {   
            if(i==N) continue;
            if(in!=i) cout<<V[i]<<" ";
        }
        cout<<endl;
        return;
        }
        cout<<"-1\n";
    // ll N;cin>>N;
    // ll A[N+2];for(ll i=0;i<N+2;++i)cin>>A[i];sort(A,A+N+2);
    // //ll a=A[N+1],b=A[N];
    // ll x=0;
    // for(ll i=0;i<N+2;++i)x+=A[i];
    // cout<<x<<'\N';
    // if(x!=a and x!=b)
    // {
    //     cout<<"-1\N";return;
    // }
    // for(ll i=0;i<N;++i)cout<<A[i]<<' ';cout<<'\N';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/