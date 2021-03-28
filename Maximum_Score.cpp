#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
const int INF = 1000000000;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    int n,i,j,k;
	cin>>n>>k;
	int m[n+1],t[n+1];
	int idx=1;
	for(i=1;i<=n;i++)
	{
		cin>>m[i]>>t[i];
		
	}
	
	ll dp[n+1][k+1][2];
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		{
			for(int i1=0;i1<2;i1++)
			{
				if(j==0&&i1==0)
				dp[i][j][i1]=0;
			    else
				dp[i][j][i1]=-1*INF;

			}
			
		}
	}
	//cout<<idx;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		{
			dp[i][j][0]=max(dp[i][j][0],dp[i-1][j][0]);
			
			if(j+t[i]<=k)
			{
				dp[i][j+t[i]][0]=max(dp[i][j+t[i]][0],dp[i-1][j][0]+m[i]);
			}
			dp[i][j][1]=max(dp[i][j][1],dp[i-1][j][1]);
			if(j+t[i]<=k)
			{
				dp[i][j+t[i]][1]=max(dp[i][j+t[i]][1],dp[i-1][j][0]);
				dp[i][j+t[i]][1]=max(dp[i][j+t[i]][1],dp[i-1][j][1]+m[i]);
			}



			
			
		}
	}
	ll ans=0;
	for(i=0;i<=k;i++)
		ans=max(ans,dp[n][i][1]);
	cout<<ans<<"\n";
    // ll N,W;cin>>N>>W;
    // //vector<pair<ll,ll>> A;
    // ll val[N+1],w[N+1];
    // for(ll i=1;i<=N;++i)
    // {
    //     ll x,y;cin>>x>>y;
    //     //A.push_back({x,y});
    //     val[i]=x;w[i]=y;
    // }   
    // // sort(A.begin(),A.end());
    // // for(ll i=0;i<N;++i)
    // // {
    // //     val[i]=A[i].first;
    // //     w[i] = A[i].second;
    // // }
    // if(N==1)
    // {
    //     cout<<"0\n";return;
    // }
    // //for(auto i : val)cout<<i<<' ';cout<<'\n';
    // //for(auto i : w)cout<<i<<' ';cout<<'\n';
    // ll dp[N+1][W+1][2]={0};
    // for (ll i = 0; i <= N; i++) 
    // {
    //     for (ll j = 0; j <= W; j++) 
    //     {
    //         for(ll k=0;k<2;++k)
    //         {
    //             if(j==0 and  k ==0)
	// 			dp[i][j][k]=0;
	// 		    else
	// 			dp[i][j][k]=-1;
    //         }
    //     }
    // }
    // for (ll i = 1; i <= N; i++) 
    // {
    //     for (ll j = 0; j <= W; j++) 
    //     {
    //         dp[i][j][0]=max(dp[i][j][0],dp[i-1][j][0]);
    //         // if (w[i - 1] <= W)
    //         //     dp[i][j] = max(val[i - 1] + 
    //         //         dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
    //         // else
    //         //     dp[i][j] = dp[i - 1][j];
    //         if(j+w[i]<=W)
	// 		{
	// 			dp[i][j+w[i]][0]=max(dp[i][j+w[i]][0],dp[i-1][j][0]+val[i]);
	// 		}
	// 		dp[i][j][1]=max(dp[i][j][1],dp[i-1][j][1]);
	// 		if(j+w[i]<=W)
	// 		{
	// 			dp[i][j+w[i]][1]=max(dp[i][j+w[i]][1],dp[i-1][j][0]);
	// 			dp[i][j+w[i]][1]=max(dp[i][j+w[i]][1],dp[i-1][j][1]+val[i]);
	// 		}
    //     }
    // }

    
    // // ll res = dp[N][W];    
    // // //printf("%d\n", res);
    // // ll p = dp[N][W][2];
    // // ll mn = LONG_MAX;
    // // //vector<ll> V;
    // // ll j = W;
    // // for (ll i = N; i > 0 and res > 0; i--) 
    // // {
    // //     if (res == dp[i - 1][j]) continue;        
    // //     else 
    // //     {
    // //        //printf("%d  ", w[i - 1]);
    // //         //V.push_back(w[i-1]);
    // //         mn = min(mn,val[i-1]);
    // //         cout<<val[i-1]<<' ';
    // //         res -= val[i - 1];
    // //         j -= w[i - 1];
    // //     }
    // // }
    // ll ans=0;
	// for(ll i=1;i<=W;i++)ans=max(ans,dp[N][i][1]);
	// cout<<ans<<"\n";
    // //cout<<mn<<' ';
    // //cout<<p<<' ';
    // //cout<<p - mn<<'\n';
    // //for(auto i : V)cout<<i<<' ';cout<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/