#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;ll N;
    cin>>s>>N;
    sort(s.begin(),s.end());
    for(int i=0;i<N-1;++i)
    {
        bool ok = next_permutation(s.begin(),s.end());
                  //next_permutation(s.begin(),s.end());
    }
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/