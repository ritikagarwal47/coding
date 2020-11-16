#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s1,s2;cin>>s1>>s2;
    ll M1[26]={0},M2[26]={0};
    ll mx1=0,mx2=0;
    for(ll i=0;i<s1.size()-1;++i)++M1[s1[i]-'a'],mx1=max(mx1,M1[s1[i]-'a']);
    for(ll i=0;i<s2.size()-1;++i)++M2[s2[i]-'a'],mx2=max(mx2,M2[s2[i]-'a']);
    if(s1[s1.size()-1]=='e')cout<<mx1<<" east ";
    else if(s1[s1.size()-1]=='w')cout<<mx1<<" west ";
    else if(s1[s1.size()-1]=='n')cout<<mx1<<" north ";
    else cout<<mx1<<" south ";
    if(s2[s2.size()-1]=='e')cout<<mx2<<" east\n";
    else if(s2[s2.size()-1]=='w')cout<<mx2<<" west\n";
    else if(s2[s2.size()-1]=='n')cout<<mx2<<" north\n";
    else cout<<mx2<<" south\n";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/