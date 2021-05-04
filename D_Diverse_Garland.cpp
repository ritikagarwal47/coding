#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(i==0)continue;

        if(s[i]==s[i-1])
        {
            if(s[i-1]=='G')
            {
                if(s[i+1]=='B')s[i]='R';
                else s[i]='B';
                //cout<< ans <<' '<< "1" <<'\n'; 
            }
            else if(s[i-1]=='B')
            {
                if(s[i+1]=='R')s[i]='G';
                else s[i]='R';
                //cout<< ans <<' '<< "2" <<'\n'; 
            }
            else
            {
                if(s[i+1]=='G')s[i]='B';
                else s[i]='G';
                //cout<< ans <<' '<< "3" <<'\n'; 
            }
            ++ans;   
            //cout<< ans <<' '<< s[i] <<'\n';         
        }
    } 
    cout<< ans <<'\n';
    cout<< s <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/