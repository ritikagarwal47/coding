#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(ll  x)
{
    ll sum=0;
    ll  k=x;
    while(k>0)
    {
        sum+=k%10;
        k=k/10;
    }
    if(__gcd(x,sum)>1) return 1;
    return false;
}
void solve()
{
    ll N;cin>>N;
     while(1)
        {
            if(valid(N))
            {
                cout<<N<<"\n";
                return;
            }
            N++;
        }    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/