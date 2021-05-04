#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void fun(ll *A,ll N,ll K,ll l,ll r)
{
    vector<ll> ans;

    for(ll i=1;i<N;++i)ans.push_back(A[i]-A[i-1]);
    
    for(ll i=0;i<ans.size();++i)ans[i]-=1;
    sort(ans.begin(),ans.end(),greater<ll>());
    ll p = A[0];
    ll q = A[N-1];
    if(p!=1)l=p-1;
    if(q!=K)r=K-q;

    ll javab=0;

    for(auto i: ans)javab = max(javab,(i+1)/2);

    javab += max(l,r);

    for(auto i: ans)javab = max(javab,i);
    ll len = ans.size();
    javab = max(javab,l+r);
    if(len>1)
    {
        ll kaju = (ans[0] + 1)/2 + (ans[1]+1)/2;
        javab = max(javab,kaju);
    }
    double la_javab = (double)javab/(double)K;
    cout<< fixed<<setprecision(10) << la_javab <<'\n';
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i]; 
    sort(A,A+N);
    fun(A,N,K,0,0);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/