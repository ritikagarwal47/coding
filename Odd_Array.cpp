#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==3)cout<<"1 2 1";
    else
    {
        ll l=1;
        cout<<"1 ";
        --N;
        while(N--)
        {
            if(l==1)cout<<"2 ";
            else if(l==3)cout<<"3 ";
            else cout<<"1 ";
        }
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/