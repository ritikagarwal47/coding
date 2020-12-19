#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience
void solve()
{
    ll N,x;cin>>N>>x;
    if(N<=2)cout<<"1\n";
    else 
    {
        N-=2;
        if(N%x==0)cout<< N/x +  1 <<'\n';
        else cout<< N/x + 2 <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/