#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,x;cin>>N;
    ll ans=0,ok=0,A[N];for(ll i=0;i<N;++i)cin>>A[i];sort(A,A+N);
    for(ll i=0;i<N;++i)
    {
        if((i+1)<A[i])
        {
            ok=1;break;
        }
        ans += (i + 1 - A[i]);
    }
    if(ok or ans%2==0)cout<<"Second\n";
    else cout<<"First\n";
    //else cout<<"Second\n";//7860
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/