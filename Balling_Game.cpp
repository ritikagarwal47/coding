#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> V;
    bool ok=false;
    string s;getline(cin,s);
    stringstream str(s);
    string ch;
    while(getline(str,ch,' '))
    {
        //char ch;cin>>ch;
        //cout<<ch<< ' ';
        
        // if(ch=='-')
        // {
        //     ok=true;continue;
        // }
        if(ch=="X")V.pop_back();
        else if(ch=="Y")V.push_back(V[V.size()-1]*2);
        else if(ch=="+")V.push_back(V[V.size()-1] + V[V.size()-2]);
        else 
        {
            ll c = stoi(ch);
            //if(ok)c = -1*c;//,ok=false;
            //if(c<0)V.push_back(c+1);
            //else 
            V.push_back(c);
            //ok = false;
        }
        //cout<<V[V.size()-1] <<i<<' ';
    } 
    ll ans=0;
    for(ll i=0;i<V.size();++i)ans+=V[i];
    //cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/