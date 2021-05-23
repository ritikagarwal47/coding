#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=1;
    for(ll i=1;i*(i+1)<2*N;++i)
    {
        double a = (1.0 * N-(i * (i + 1)) / 2) / (i + 1);
        if(a-(ll)a==0.0)++ans;
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/