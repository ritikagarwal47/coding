#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll s=0;//bool ok=false;
    ll A[N]; ll x=0;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];s+=A[i];
        if(A[i]==2)++x;
    }
    if(s%2==0)cout<<"0\n";
    else if(x>0)cout<<"1\n";
    else cout<<"-1\n";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/