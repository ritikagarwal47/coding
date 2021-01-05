#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll r,g,b;cin>>r>>g>>b;
    ll ans=0,ans1=0,ans2=0;
    ans = r/3 + g/3 + b/3;
    if(r>0 and g>0 and b>0)
        ans1 = (r-1)/3 + (g-1)/3 + (b-1)/3 + 1;
    if(r>1 and g>1 and b>1)
        ans2 = (r-2)/3 + (g-2)/3 + (b-2)/3 + 2; 
    cout<< max(ans,max(ans1,ans2)) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/