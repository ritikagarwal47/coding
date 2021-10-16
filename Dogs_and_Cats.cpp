#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,D,C,M;cin>>N>>D>>C>>M;
    string s;cin>>s;
    bool ok=false;
    for(auto i:s)
    {
        if(i=='D')
        {
            if(D==0 or ok)
            {
                cout<<"NO\n";return;
            }
            --D;C+=M;
        }
        else 
        {
            if(C==0)
            {
                ok=true;
            }
            --C;
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/