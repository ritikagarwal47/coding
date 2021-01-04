#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll sum=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],sum+=A[i];
    sort(A,A+N);
    if(sum%2)
    {
        cout<<"NO\n";return;
    }
    sum/=2;
    for(ll i=N-1;i>=0;i--)
        {
            if(sum>=A[i])
            {
                sum-=A[i];

            }
            if(sum==0)
            {
                cout<<"YES\n";
                return;
            }
        }
         if(sum==0)
            {
                cout<<"YES\n";
                return;
            }
            cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/