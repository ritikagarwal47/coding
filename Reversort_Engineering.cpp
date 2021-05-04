#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool check(vector<ll> V, ll N ,ll K)
{
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
    if(ans==K)return true;
    return false;
}
void solve()
{
    ll N,K;cin>>N>>K;
    // if(K<(N-1) or K>(N*(N+1)/2  - 1))
    // {
    //     cout<<"IMPOSSIBLE\n";return;
    // }
    vector<ll> A(N); for(ll i=0;i<N;++i)A[i]=i+1;
    do{
        if(check(A,N,K))
        {
            for(auto i : A)cout<<i<<' ';cout<<'\n';return;
        }
    }while(next_permutation(A.begin(),A.end()));
    cout<<"IMPOSSIBLE\n";
    //for(auto i:A)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/