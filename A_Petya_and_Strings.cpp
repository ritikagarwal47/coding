#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s1,s2;cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    for(ll i=0;s1[i];++i)
    {
        if(s1[i]<s2[i])
        {
            cout<<"-1";return;
        }
        if(s1[i]>s2[i])
        {
            cout<<"1";return;
        }
    }
    cout<<"0";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/