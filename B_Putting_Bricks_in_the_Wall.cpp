#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
    { 
        vector<char> br;
        int n;
        cin>>n;
        char ar[n][n];
        for(ll i=0;i<n;++i)
        {
            for(ll j=0;j<n;++j)
            cin>>ar[i][j];
        }
        
        char a=ar[0][1];
        char b=ar[1][0];
        char c=ar[n-1][n-2];
        char d=ar[n-2][n-1];
        if(a==b&&c==d&&a==c)
        {
            cout<<"2\n";
            cout<<"1 2\n";
            cout<<"2 1\n";
            return;
        }
        if(a==b&&c==d&&a!=c)
        {
            cout<<"0\n";
            return;
        }
        if(a==b&&c!=d)
        {
            if(a==c)
            {
                cout<<"1\n";
                cout<<n<<" "<<n-1<<"\n";
                return;
            }
            if(b==d)
            {
                cout<<"1\n";
                cout<<n-1<<" "<<n<<"\n";
                return;
            }
        }
        if(a!=b&&c==d)
        {
            if(a==c)
            {
                cout<<"1\n";
                cout<<"1 2\n";
                return;
            }
            if(b==c)
            {
                cout<<"1\n";
                cout<<"2 1\n";
                return;
            }
        }
        if(a==b&&c!=d)
        {
            if(a==c)
            {
                cout<<"1\n";
                cout<<n<<" "<<n-1<<"\n";
                return;
            }
            if(b==d)
            {
                cout<<"1\n";
                cout<<n-1<<" "<<n<<"\n";
                return;
            }
        }
        if(a!=b&&d!=c)
        {
            cout<<"2\n";
            cout<<"1 2\n";
            cout<<n<<" "<<n-1<<"\n";
        }       
    }
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/