#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll computeXOR(ll n) 
{   
    switch(n & 3) 
    { 
        case 0: return n;    
        case 1: return 1;     
        case 2: return n + 1; 
        case 3: return 0;    
    } 
    return 0;
} 
void solve()
{
    ll N;cin>>N;
    cout<< computeXOR(N) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/