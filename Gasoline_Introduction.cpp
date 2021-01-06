#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll sa=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],sa+=A[i];
    ll ans=sa;
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        c+=A[i];
        //c--;
        if(c==0)
        {
            ans=i;
            break;
        }
        c--;
    }
    //ans += c;
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/