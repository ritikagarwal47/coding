#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
    { 
        ll n;cin>>n;
        string a,b;cin>>a;
        ll last=-1;
        for(ll i=0;i<n;i++)
        {
            ll x=(a[i]-'0');
            if(last==-1)
            {
                // b[i]='1';
                  b+='1';
                last=x+1;
            }
            else if(last==0)
            {
                
                    // b[i]='1';
                      b+='1';
                    last=1+x;
            }
            else if(last==1)
            {
                if(x==0)
                {
                    // b[i]='0';
                      b+='0';
                    last=0;
                }
                else
                {
                    // b[i]='1';
                      b+='1';
                    last=1+x;
                }
                
            }
            else
            {
                if(x==1)
                {
                    //  b[i]='0';
                      b+='0';
                     last=x;
                }
                else
                {
                    //  b[i]='1';
                    b+='1';
                     last=1+x;
                }
                
            }
            
            

        }
        cout<<b<<"\n";
        
    }
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/