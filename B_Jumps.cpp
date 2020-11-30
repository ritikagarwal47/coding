#include<bits/stdc++.h>
#define ll long long int
#define N 2000+5
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
// ll A[N];
// void pre()
// {
//     A[0]=0;
//     for(ll i=1;i<=2000;++i)
//     {
//         A[i] = A[i-1] + i;
//     }
// }
void solve()
{
    ll x;cin>>x;
    if(x==1)
    {
        cout<<"1\n";return;
    }
    ll s=0;
    ll i=0;
    for(i=1;i<=x;++i)
    {
        s+=i;
        if(s>=x)break;
    }
    if((s-x)==1)cout<< i + (s-x) <<'\n';
    else cout<< i <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/