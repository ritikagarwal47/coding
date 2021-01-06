#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
     string s;cin>>s;
     for(ll i=0;s[i];++i) 
     {
         if(i==0)
         {
            ll d = s[i] - 'A';
            d+=98;
            d%=26;
            cout<< char(d + 'A');
         }
         if(i==1)
         {
            ll d = s[i] - 'A';
            d+=57;
            d%=26;
            cout<< char(d + 'A');
         }
         if(i==2)
         {
            ll d = s[i] - 'A';
            d+=31;
            d%=26;
            cout<< char(d + 'A');
         }
         if(i==3)
         {
            ll d = s[i] - 'A';
            d+=45;
            d%=26;
            cout<< char(d + 'A');
         }
         if(i==4)
         {
            ll d = s[i] - 'A';
            d+=46;
            d%=26;
            cout<< char(d + 'A');
         }
     }
     cout<< '\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/