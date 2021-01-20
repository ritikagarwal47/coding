#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s,T;getline(cin,s);
    stringstream X(s);
    map<string,ll> M;
    while (getline(X,T,' '))
    {
        cout<<T<<' ';++M[T];
    }
    for(auto i : M)
    {
        cout<<i.first<<' ';
        if(i.second<=3)
        {
            cout<<i.first<<'\n';return;
        }
    }    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/