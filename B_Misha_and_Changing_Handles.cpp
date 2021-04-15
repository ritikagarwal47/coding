#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll Q;cin>>Q;
    map<string,string> M;
    while (Q--)
    {
        string a,b;cin>>a>>b;
        bool ok= true;
        for(auto i: M)
        {
            if(i.second==a)
            {
                M[i.first]=b;ok=false;break;
            }
        }
        if(ok)
        {
            M[a]=b;
        }
        // for(auto i:M)
        // {
        //     cout<<i.first<<' '<<i.second<<'\n';
        // }
        // cout<<"00\n";
    }
    cout<<M.size()<<'\n';
    for(auto i:M)
    {
        cout<<i.first<<' '<<i.second<<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/