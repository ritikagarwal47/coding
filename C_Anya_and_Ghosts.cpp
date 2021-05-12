#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,T,R;cin>>N>>T>>R;
	ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
	if(T<R)
	{
		cout<<-1;return;
	}
	ll C[R];
	for(ll i=0;i<R;++i)C[i]=T-i;
    //for(auto i:C)cout<<i<<' ';
	ll ans=R;bool ok=false;
	for(ll i=1;i<N;++i)
	{
		ll p=A[i]-A[i-1];
		ll a=0;
        //cout<<a<<' '<<ans<<'\n';
		for(ll j=0;j<R;++j)
		{
			C[j]-=p;
			if(C[j]<=0)
			{
				C[j]=T-a;
				if(C[j]<=0)ok=true,j=R,i=N;
                ++a;++ans;
			}
            //cout<<a<<' '<<ans<<'\n';
		}
        //cout<<a<<' '<<ans<<'\n';
	}
    //cout<<a<<' '<<ans<<'\n';
	ok ?cout<< -1 :cout<<ans;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/