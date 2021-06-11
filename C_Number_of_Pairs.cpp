#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,L,R;cin>>N>>L>>R;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        ll a = lower_bound(A,A+N,L-A[i]) - A;
        ll b = upper_bound(A,A+N,R-A[i]) - A;

        if(b==N or (A[b]+ A[i])>R)--b;

        c+= (b - a  + 1);
        if(a<=i and i<=b)c--;
    }  
    cout<<c/2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/