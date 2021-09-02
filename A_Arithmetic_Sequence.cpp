#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll d1 = (b-a);
    ll d2 = (c-b);
    if(d1==d2)
    {
        cout<<"0\n";return;
    }
    if(d1>d2)
    {
        cout<< (d1-d2) <<'\n';return;
    }
    ll d = (a+c+1);
    //cout<<d/2<<' ';cout<< (d&1) <<'\n';
    cout<< (d/2 - b) + ((a+c)&1) <<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/