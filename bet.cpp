#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{ 
    ll a,b;cin>>a>>b;
    ll  mn=min(a,b);
    ll d=abs(a-b);
    if(a==b)
    {
        cout<<"0 0\n";
        return;
    }
    cout<< max(a,b) - mn <<" "<< min(a%d,d-a%d) <<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/