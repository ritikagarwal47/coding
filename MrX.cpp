#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    if(N%K==0)
    {
        cout<<K*((N/K)*(N/K - 1)/2);
    } 
    else
    {
        cout<< (N%K)*((N/K)*(N/K + 1)/2)  + (K-N%K)*((N/K)*(N/K - 1)/2); 
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/