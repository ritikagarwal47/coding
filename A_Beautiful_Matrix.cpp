#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll A[6][6];ll a,b;
    for(ll i=1;i<=5;++i)
    {
        for(ll j=1;j<=5;++j)
        {
            cin>>A[i][j];
            if(A[i][j])a=i,b=j;
        }
    }
    cout<< abs(a-3) + abs(b-3) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/