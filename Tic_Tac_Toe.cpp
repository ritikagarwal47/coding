#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x=0,o=0,s=0;
    char A[3][3];
    for(ll i=0;i<3;++i)
        for(ll j=0;j<3;++j)
        {
            cin>>A[i][j];
            if(A[i][j]=='O')++o;
            else if(A[i][j]=='X')++x;
            else ++s;
        } 
    ll wx = 0, wo = 0;
    if(A[0][0] == 'X' and A[1][0] == 'X' and A[2][0] == 'X')wx=1;
    else if(A[0][1] == 'X' and A[1][1] == 'X' and A[2][1] == 'X')wx=1;
    else if(A[0][2] == 'X' and A[1][2] == 'X' and A[2][2] == 'X')wx=1;
    else if(A[0][0] == 'X' and A[1][1] == 'X' and A[2][2] == 'X')wx=1;
    else if(A[0][0] == 'X' and A[0][1] == 'X' and A[0][2] == 'X')wx=1;
    else if(A[1][0] == 'X' and A[1][1] == 'X' and A[1][2] == 'X')wx=1;
    else if(A[2][0] == 'X' and A[2][1] == 'X' and A[2][2] == 'X')wx=1;
    else if(A[0][2] == 'X' and A[1][1] == 'X' and A[2][0] == 'X')wx=1;
    if(A[0][0] == 'O' and A[1][0] == 'O' and A[2][0] == 'O')wo=1;
    else if(A[0][1] == 'O' and A[1][1] == 'O' and A[2][1] == 'O')wo=1;
    else if(A[0][2] == 'O' and A[1][2] == 'O' and A[2][2] == 'O')wo=1;
    else if(A[0][0] == 'O' and A[1][1] == 'O' and A[2][2] == 'O')wo=1;
    else if(A[0][0] == 'O' and A[0][1] == 'O' and A[0][2] == 'O')wo=1;
    else if(A[1][0] == 'O' and A[1][1] == 'O' and A[1][2] == 'O')wo=1;
    else if(A[2][0] == 'O' and A[2][1] == 'O' and A[2][2] == 'O')wo=1;
    else if(A[0][2] == 'O' and A[1][1] == 'O' and A[2][0] == 'O')wo=1;
    if((wx == 1 and wo == 1) or ((x-o)<0) or (x-o)>1)cout<<"3\n";
    else if(x == 0 and o == 0 and s == 9)cout<<"2\n";
    else if(wx == 1 and wo == 0 and x > o)cout<<"1\n";
    else if(wx == 0 and wo == 1 and x == o)cout<<"1\n";
    else if(wx == 0 and wo == 0 and s == 0)cout<<"1\n";
    else if(wx == 0 and wo == 0 and s > 0)cout<<"2\n";
    else cout<<"3\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/