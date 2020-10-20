#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{ 
    ll N;cin>>N;
    ll A[N]; ll mx=0;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];mx=max(mx,A[i]);
    }
    if(A[0]==mx and A[1]<mx)
    {
        cout<<"1\n";return;
    }
    if(A[N-1]==mx and A[N-2]<mx)
    {
        cout<<N<<"\n";
        return;
    }
    for(ll i=1;i<N-1;i++)
    {
        if(A[i]==mx and (A[i-1]<mx or A[i+1]<mx))
        {
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/