#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    set<string> st;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;st.insert(s);
    }
    map<string,ll> M;
    for(auto i : st)
    {
        string s=i;
        if(s[0]=='!')
        {
            M[s]++;
        }
        else
        {
            M[("!" + s)] ++;
        }
    }
    for(auto i : M)
    {
        if(i.second>1)
        {
            cout<< i.first.substr(1)<<'\n';return;
        }
    }
    cout<<"satisfiable\n";
        

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/