#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(ll N)
{
    ll ans=0;
    for(ll i=0;i<N-1;i+=2)
    {
        cout<<"? 1 "<<i+1<<' '<<i+2<<' '<<N-1<<endl;
        cin>>ans;
        if(ans==N)return i+1;
        if(ans==N-1)
        {
            cout<<"? 1 "<<i+2<<' ' <<i+1<<' '<<N-1<<endl;
            cin>>ans;
            if(ans==N)return i;
        }
    }
    return (N-1);
}
void solve()
{
    ll N;cin>>N;
    ll pos = fun(N);
    ll ans[N];ans[pos]=N;
    for(ll i=0;i<N;++i)
    {
        if(i!=pos)
        {
            cout<<"? 2 "<<i+1<<" "<<pos+1<<" "<<1<<endl;
            cin>>ans[i];
        }
    }
    cout<<"! ";
    for(auto i:ans)cout<<i<<' ';cout<<endl; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/