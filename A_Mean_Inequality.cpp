#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(void)
{
int T=1;        cin>>T;
while(T--){
    ll N;cin>>N;N = N + N;
    ll A[N];
    for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll B[N];ll a=0;
    for(ll i=0;i<N;i+=2)
    {
        B[i]=A[a];++a;
    }
    for(ll i=1;i<N;i+=2)
    {
        B[i]=A[a];++a;
    }
    for(ll i:B)cout<<i<<' ';cout<<'\n';

}
}