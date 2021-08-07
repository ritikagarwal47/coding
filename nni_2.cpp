#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,P,M,X;cin>>N>>P>>M>>X;
    if(abs(P-X)<=M)
    {   
        M-=abs(P-X)+1;
        if(M&1)
        {
            cout<<"Draw";return;
        }
        M/=2;
        
        if((P-M)>=0 and (P+M)<N and (X-M)>=0 and (X+M)<N)
        {
            cout<<"Gry";return;
        }
        cout<<M<<'\n';
    }
    cout<<"Draw";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/