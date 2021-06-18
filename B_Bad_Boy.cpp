#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,A,B;cin>>N>>M>>A>>B;
    ll p = min(N-A+B-A,A-1+B-1);
    ll q = min(abs(N-A) + abs(B-A),abs(M-B) + abs(1-A));
    if(p>q)cout<<"1 1 "<<N<<" "<<M<<'\n';
    else cout<<N<<" 1 1 "<<M<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/