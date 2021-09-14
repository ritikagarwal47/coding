#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,A,B;cin>>N>>M>>A>>B;
    ll p = N  + M  - 1;
    if(N==1 and M==1)
    {
        if(A==B and A>=1)
        {
            cout<<"Possible\n";
            cout<<A<<'\n';
        }
        else
        {
           cout<<"Impossible\n"; 
        }
        return;
    }
    if(A<p or B<p)
    {
        cout<<"Impossible\n";return;
    }
    
    cout<<"Possible\n";
    ll dp[N][M]; 
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)dp[i][j]=1;
    }
    dp[0][0] = A - p + 1;
    dp[0][M-1] = B - p + 1;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/