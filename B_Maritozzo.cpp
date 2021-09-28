#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s1,s2,s3;cin>>s1>>s2>>s3;
    string s;cin>>s;
    for(auto i:s)
    {
        if(i=='1')cout<<s1;
        else if(i=='2')cout<<s2;
        else cout<<s3;
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/