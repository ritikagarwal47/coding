#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll pre[9];
    for(int i=0;i<9;++i)cin>>pre[i];
    int A[9][9];
    for(int i=0;i<9;++i)
    {
        for(int j=8;j>=0;--j)
        {
            A[i][j]=pre[i]%10;
            pre[i]/=10;
            if(A[i][j]==9)A[i][j]=1;
        }
    }
/*    for(int i=0;i<9;++i)
    {
        for(int j=0;j<9;++j)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<'\n';
    }*/
    // for(int i=0;i<4;++i)
    // {
    //     swap(A[4][i],A[4][8-i]);
    //     swap(A[i][4],A[8-i][4]);
    // }
    // for(int i=0;i<9;++i)
    // {
    //     if(A[i][0]!=A[4][0] and A[i][0]!=A[4][4] and A[i][0]!=A[i][4])
    //     {
    //         swap(A[i][0],A[4][4]);break;
    //     }
    // }
    for(int i=0;i<9;++i)
    {
        for(int j=0;j<9;++j)
        {
            cout<<A[i][j];
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/