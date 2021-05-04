#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll countMaxSetBits(ll left,ll right) 
{ 
    while ((left | (left + 1)) <= right) 
        left |= left + 1; 
  
    return left; 
} 
void solve()
{
    ll A,B;cin>>A>>B;
    cout<< countMaxSetBits(A,B) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/