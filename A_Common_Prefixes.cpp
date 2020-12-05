#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<100;++i)cout<<"a";cout<<'\n';
    ll z=2;
    for(ll i=0;i<N;++i)
    {
        if(A[i]==0)
        {
            cout<< 'a' + z <<'\n';z++;
        }
        else if(i+1<N)
        {
            
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/