#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    char A[N][M],B[N][M];
    char x;ll ans1=0,ans2=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cin>>x;
            if((i + j) % 2LL == 0LL)
            {
				if(x == '*') ans2++;
				else ans1++;
			}
			else
            {
				if(x == '*') ans1++;
				else ans2++;
			}
        }
    }
    //cout<<ans1<<' '<<ans2<<'\n';
    if((N*M)%2==0)ans1=min(ans1,ans2);
    cout<< ans1 <<'\n';
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<M;++j)
    //     {
    //         cout<<A[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<M;++j)
    //     {
    //         cout<<B[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    
    // char x;
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<M;++j)
    //     {
    //         cin>>x;
    //         if(x!=A[i][j])++ans1;
    //         else if(x!=B[i][j])++ans2;
    //     }
    // }
    // //
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/