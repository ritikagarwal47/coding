#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();//N = N/2;
    string a = s.substr(0,N/2);
    string b = s.substr(N/2,N);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout<<"0";return;
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/