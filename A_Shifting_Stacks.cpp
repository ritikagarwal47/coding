#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll l = 0,a=A[0];
    for(ll i=1;i<N;++i)
    {
        if(a+A[i]>=i)
        {
            a+=A[i]-i;
        }
        else
        {
            cout<<"NO\n";
            return;//kkkkkkk
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