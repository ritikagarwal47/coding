#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll n,k;cin>>n>>k;
		long long int q,f;
		ll temp=0,flag=0,i;
		for(i=0;i<n;i++)
		{
			cin>>q;
			temp+=q;
			if(temp<k && flag==0)
			{
				f=i;
				flag=1;
			}
			if(flag==0)
			{
				temp=temp-k;
			}
		}
		if(flag==1)
			i=f;
		else
		{
			i=i+temp/k;
		}
		cout<<i+1<<endl;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/