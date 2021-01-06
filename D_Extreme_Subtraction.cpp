#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    if(N==1 or N==2)cout<<"YES\n";
    else
    {
        //ll diff[N]={0};
        //ll c=A[0];
        ll mn;//=A[0];
        // bool f=false;
        // for(ll i=0;i<N;++i)
        // {
        //     // cout<<A[i]<<' ';
        //     mn=min(A[i],mn);
        //     if(A[i]<=mn and f)break;
        //     A[i]-=mn;
        //     cout<<A[i]<<' ';
        //     if(A[i]>0)f=true;
        // }
        //mn=A[0];
        ll f=A[0];//,l=A[N-1];
        ll ans=0;
        for(ll i=N-1;i>0;--i)
        {
            //cout<<A[i]<<' ';
            //mn = min(mn,A[i]);
            A[i]-=A[i-1];
            //A[i]-=mn;
            if(A[i]<0)ans+=abs(A[i]);
        }
        // for(ll i=0;i<N;++i)
        // {
        //     // cout<<A[i]<<' ';
        //     if(A[i]!=0)
        //     {
        //         cout<<"NO\n";return;
        //     }
        // }
        if(f>=ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
     
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/