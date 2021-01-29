#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll n,k;cin>>n>>k;
    ll  sum=k;
    if(n%k!=0 and n>k) sum=n+k-n%k;
    if(sum%n==0)cout<<sum/n<<"\n";
    else cout<<sum/n+1<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/