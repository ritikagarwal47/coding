#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<ll> A,B; 
    ll c=0,x,s=0,sa=0,sb=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x>0)
        {
            A.push_back(x);
            sa+=x;
        }
        else
        {
            B.push_back(x);
            sb+=x;
        } 
        if(x==0)c++;
        s+=x;
    }
    if(s==0)
    {
        cout<<"NO\n";return;
    }
    cout<<"YES\n";
    if(abs(sa)>abs(sb))
    {
        sort(A.begin(),A.end(),greater<ll>());sort(B.begin(),B.end(),greater<ll>());
        for(ll i=0;i<A.size();++i)cout<<A[i]<<' ';
        for(ll i=0;i<B.size();++i)cout<<B[i]<<' ';
    cout<<'\n';
    }
    else
    {
        sort(A.begin(),A.end());sort(B.begin(),B.end());
        for(ll i=0;i<B.size();++i)cout<<B[i]<<' ';
        for(ll i=0;i<A.size();++i)cout<<A[i]<<' ';
        cout<<"\n";
    }
    
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/