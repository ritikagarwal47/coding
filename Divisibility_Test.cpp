#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N%5==0 and N%15==0 and N%75==0)cout<<"3\n";
    else if((N%5==0 and N%15==0) or (N%15==0 and N%75==0) and (N%75==0 and N%5==0))cout<<"2\n";
    else if(N%5==0 or N%15==0 or N%75==0) cout<<"1\n";
    else cout<<"0\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/