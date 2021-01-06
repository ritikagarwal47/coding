#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll X,Y;cin>>X>>Y;
    if(Y>X)cout<<"0\n";
    else
    {
        ll s=0;
        for(ll i=Y;i<=X;i+=Y)
        {
            s += i%10;
        }
        cout<< s <<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/