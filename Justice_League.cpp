#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// Not for Rating """"""""""I'm in Love with Experience :)""""""""""""
void solve()
{
    ll N,M,S;cin>>N>>M>>S;
    //ll p = ((S - 1 )%N + M)%N;
    if(N==1)cout<<"1\n";
    //else if(p==0)cout<< p - 1  <<'\n';
    else cout<<(S+M-2)%N + 1<<'\n'; 
}
int main(void)
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T=1;cin>>T;while(T--){solve();}
    exit(0);
}/*Solved By:- RITIK AGARWAL*/