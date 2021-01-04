#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    long double N,M;cin>>M>>N;
    long double ans=0;
    for(long double i=1;i<=M;++i)
    {
        ans += i*(pow(i/M,N) - pow((i-1)/M,N));
    }
    cout<< fixed <<setprecision(10)<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/