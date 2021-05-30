#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    cout<< N*3 <<'\n';
    for(ll i=0;i<N;i+=2)
    {
        cout<<"1 "<<i+1<<" "<<i+2<<'\n';
        cout<<"2 "<<i+1<<" "<<i+2<<'\n';
        cout<<"2 "<<i+1<<" "<<i+2<<'\n';
        cout<<"1 "<<i+1<<" "<<i+2<<'\n';
        cout<<"2 "<<i+1<<" "<<i+2<<'\n';
        cout<<"2 "<<i+1<<" "<<i+2<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/