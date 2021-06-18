#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N&1)cout<<"Bob\n"  ;
    else
    {
        //ll p = log2(N);
        ll a=0;
        while(N%2==0)
        {
            ++a;N/=2;
        }
        if(N>1 or a%2==0)cout<<"Alice\n";
        else cout<<"Bob\n"  ;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/