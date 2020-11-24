#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N+1];
    //vector<ll> A(N+1,0); 
    map<ll,ll> M;
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        A[i]=x;
        ++M[A[i]];
    }
    if(M.size()==1)
    {
        cout<<"0\n";return;
    }
    if(M[A[0]]==1 or M[A[N-1]]==1 or (A[0]==A[N-1] and M[A[0]]==2))
    {
        cout<<"1\n";return;
    }
    ll mn = LONG_MAX;
    ll a=LONG_MAX;
    for(auto i :M)
    {
        //mn = min(mn,i.second);
        if(a>i.second)
        {
            a = i.second;
            mn = i.first;
        }
    }
    bool f=false;
    ll ans=0;
    //cout<< mn <<'\n';
    if(A[0]==mn)f=true;
    //else ++ans;
    //A.push_back(mn);
    A[N]=mn;
    for(ll i=0;i<=N;++i)
    {
        if(A[i]!=mn)f=false;
        else if(A[i]==mn and f==false)
        {
            ++ans;f=true;
        }
       // cout<< ans<<' '<< i <<'\n';
        // if(A[i]==mn and f=false)
        // {

        // }
    }
    f=false;
    
    mn = A[0];
    if(A[0]==mn)f=true;
    A[N]=mn;
    ll ans1=0;
    for(ll i=0;i<=N;++i)
    {
        if(A[i]!=mn)f=false;
        else if( A[i]==mn and f==false)
        {
            ++ans1;f=true;
        }
        // if(A[i]==mn and f=false)
        // {

        // }
    }
    f=false;
    
    mn = A[N-1];
    if(A[0]==mn)f=true;
    A[N]=mn;
    ll ans2=0;
    for(ll i=0;i<=N;++i)
    {
        if(A[i]!=mn)f=false;
        else if( A[i]==mn and f==false)
        {
            ++ans2;f=true;
        }
        // if(A[i]==mn and f=false)
        // {

        // }
    }
    cout<< min(ans,min(ans1,ans2)) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/