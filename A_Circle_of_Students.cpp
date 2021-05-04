#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll c=0;
    bool f=false;
    if(N==1 or N==2)
    {
        cout<<"YES\n";return;
    }
    ll a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        if(abs(A[i]-A[(i+1)%N])==1)++a;
        else if(abs(A[i]-A[(i+1)%N])==N-1)++b;
        // if(A[i]==1)
        // {
        //     f=true;
        //     continue;
        // }

        // if(f and A[i]<A[i+1])++c;
        // else if(!f and A[i]<A[i+1])++c;   

        //cout<< f<<' '<<A[i]<< ' ' <<A[i+1]<<' '<< c <<'\n';     
    }
    if(a==N-1 and b==1)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/