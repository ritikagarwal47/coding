#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    //map<ll,ll> M;
    ll A[6]={0},x; 
    for(ll i=0;i<N;++i)//cin>>A[i],++M[A[i]];
    {
        cin>>x;
        if(x==4)A[0]++;
        if(x==8 and A[0]>A[1])++A[1];
        if(x==15 and A[1]>A[2])++A[2];
        if(x==16 and A[2]>A[3])++A[3];
        if(x==23 and A[3]>A[4])++A[4];
        if(x==42 and A[4]>A[5])++A[5];
    }
    cout<< N - 6*A[5] <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/