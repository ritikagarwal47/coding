#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll X1,Y1,X2,Y2;cin>>X1>>Y1>>X2>>Y2;
    if(X1==X2 and Y1==Y2)cout<<"SECOND\n";
    else
    {
        ll d = (ll)sqrt(pow(abs(X1-X2),2) + pow(abs(Y1-Y2),2));
        if(d<=1)cout<<"FIRST\n";
        else cout<<"DRAW\n";
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/