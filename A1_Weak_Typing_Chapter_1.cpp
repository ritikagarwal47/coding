#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    string st = "";
    for(auto i:s)
    {
        if(i=='X' or i=='O')st+=i;
    }  
    ll ans1=0,ans2=0;
    bool ok=true;
    for(auto i:st)
    {
        if(ok and i=='X'){}
        else if(!ok and i=='O'){}
        else 
        {
            ok = !ok;
            ans1++;
        }
    }
    ok=false;
    for(auto i:st)
    {
        if(ok and i=='X'){}
        else if(!ok and i=='O'){}
        else 
        {
            ok = !ok;
            ans2++;
        }
    }
    cout<< min(ans1,ans2) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/