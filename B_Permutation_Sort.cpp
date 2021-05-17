#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    bool ok=true;
    for(ll i=1;i<=N;++i)
    {
        if(A[i-1]!=i)
        {
            ok=false;break;
        }
    }  
    if(ok)
    {
        cout<<"0\n";return;
    }
    // ok=true;ll c=N;
    // for(ll i=0;i<N;++i)
    // {
    //     if(A[i]!=c)
    //     {
    //         ok=false;break;
    //     }
    //     --c;
    // }
    if(A[0]==N and A[N-1]==1)
    {
        cout<<"3\n";return;
    }
    if(A[0]==1 or A[N-1]==N)
    {
        cout<<"1\n";return;
    }
    // ll s=0;
    // for(ll i=0;i<N;++i)
    // {
    //     if(A[i]==1)
    // }
    
    cout<<"2\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/