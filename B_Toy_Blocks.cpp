#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //map<ll,ll> M;
    ll A[N]; 
    //ll mx=0,mx1=0;
    ll s=0,mx=0;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        mx=max(mx,A[i]);
        s+=A[i];
        //++M[A[i]];
    }
    // ll mx=0,mx1=0;
    // ll a=0,b=0;
    // for(auto i : M)
    // {
    //     if(i.first>mx)
    //     {
    //         mx1 = mx;
    //         b=a;
    //         mx=i.first;
    //         a=i.second;
    //     }
    // }
    // cout<<mx<<' '<<mx1<<'\n';
    // if(N==2)// or mx1==0)
    // {
    //     cout<<"0\n";return;
    // }
//     ll ans=0;
//    // N -= a;
//     ll d = mx - mx1;
//     if(d%(N-a)!=0)ans += d%(N-a);
//     //cout<< 
//     for(ll i=0;i<N;++i)
//     {
//         if(A[i]<mx1)
//         {
//             ans+= mx1 - A[i];
//         }
//     }
    // cout<< ans<<'\n';
    ll d = (s + N - 2)/(N-1);
    if(mx>d)cout<< mx*(N-1) - s <<'\n';
    else cout<< d *(N-1) - s <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/