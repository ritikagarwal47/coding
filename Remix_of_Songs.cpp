#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;getline(cin,s);
    stringstream sss(s);
    string word;
    vector<string> ar;
    ll mx = LONG_MAX;
    string tmp;
    while(sss>>word)
    {
        ar.push_back(word);
        if(word.size()<mx)mx=word.size(),tmp=word;

    }
    cout<<tmp<<" ";
    for(auto i : ar)cout<<i<<" "<<tmp<<" ";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/