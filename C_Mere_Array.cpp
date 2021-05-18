#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N],B[N];for(ll i=0;i<N;++i)cin>>A[i],B[i]=A[i];
    sort(B,B+N);
    ll mn = B[0];
    for(ll i=0;i<N;++i)
    {
        if(A[i]==B[i])continue;
        if(A[i]%mn)
        {
            cout<<"NO\n";return;
        }
    }  
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/