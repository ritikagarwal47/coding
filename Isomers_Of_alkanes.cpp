#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[21];
void pre()
{
    dp[0]=dp[1]=dp[2]=dp[3]=1;dp[4]=2;dp[5]=3;dp[6]=5;dp[7]=9;dp[8]=18;dp[9]=35;dp[10]=75;dp[11]=159;
    dp[12]=355;dp[13]=802;dp[14]=1858;dp[15]=4347;dp[16]=10359;dp[17]=24894;dp[18]=60523;dp[19]=148284;dp[20]=366319;
}
void solve()
{
    ll N;cin>>N;cout<<dp[N]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/