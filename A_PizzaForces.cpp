#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    // while(N>0)
    // {
    //     if(N>=10)
    //     {
    //         N-=10;ans+=25;
    //     }
    //     else if(N>=8)
    //     {
    //         N-=8;ans+=20;
    //     }
    //     else
    //     {
    //         N-=6;ans+=15;
    //     }
    // }  
    
    cout<< ((N+5)/6)*15 <<' '<<((N+7)/8)*20 <<' '<<((N+9)/10)*25 <<' ';
    ll ans = ((N+5)/6)*15;//cout<<ans<<' ';
    ans=min(ans,((N+7)/8)*20);//cout<<ans<<' ';
    ans=min(ans,((N+9)/10)*25);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/