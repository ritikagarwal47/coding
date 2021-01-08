#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==1)
    {
        cout<<"9\n";return;
    }
    if(N==2)
    {
        cout<<"98\n";return;
    }
    cout<<"989";
    ll a=0;
    for(ll i=4;i<=N;++i)
    {
        cout<<a;++a;
        if(a==10)a=0;
    }
    cout<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/