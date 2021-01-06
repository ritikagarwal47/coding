#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll L,R;cin>>L>>R;
    //cout<< (7%8) <<'\n';
    //if(R%L==0)cout<<"-1\n";
    if(L<=(R-L))cout<<"-1\n";
    else cout<<R<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/