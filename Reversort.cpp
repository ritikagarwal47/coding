#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> V;ll x;
    for(ll i=0;i<N;++i)cin>>x,V.push_back(x);
    vector<ll> A = V ;sort(A.begin(),A.end());
    ll ans=0;
    for(ll i=0;i<N-1;++i)
    {
        ll mn = A[i];
        ll a;
        for(ll j=i;j<N;++j)
        {
            if(mn==V[j])
            {
                a=j;break;
            }
        }
        ans+= (a-i) + 1;
        reverse(V.begin() + i ,V.begin() + a+1);
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