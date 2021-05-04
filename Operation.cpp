#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,X;cin>>N>>X;
    if(N==X)
    {
        cout<<"0\n";return;
    }
    if(N>X)
    {
        cout<< "1" <<'\n';
    }
    else
    {
        //ll d = X/N;
        if(X%N==0)cout<<"1\n";
        else cout<<"2\n";
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/