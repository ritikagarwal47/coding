#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[22];
void pre()
{
    dp[1]=1;dp[2]=5;dp[3]=11;dp[4]=36;dp[5]=95;dp[6]=281;dp[7]=781;dp[8]=2245;dp[9]=6336;dp[10]=18061;
    dp[11]=51205;dp[12]=145601;dp[13]=413351;dp[14]=1174500;dp[15]=3335651;dp[16]=9475901;
    dp[17]=26915305;dp[18]=76455961;dp[19]=217172736;dp[20]=616891945;dp[21]=1752296281;
}
void solve()
{
    ll N;cin>>N;
    cout<< dp[N]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/