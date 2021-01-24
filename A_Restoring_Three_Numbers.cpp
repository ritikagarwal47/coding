#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
      int x,y,z,sum;
      int ar[4];
      cin>>x>>y>>z>>sum;
      ar[0]=x;
      ar[1]=y;
      ar[2]=z;
      ar[3]=sum;
      sort(ar,ar+4);
      sum=ar[3];
      cout<<sum-ar[0]<<" "<<sum-ar[1]<<" "<<sum-ar[2]<<"\n";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/