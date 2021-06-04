#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string X,Y;cin>>X>>Y;
    ll m = X.size();
    ll n = Y.size();
    ll L[m + 1][n + 1]; 
    ll i, j; 
    for (i = 0; i <= m; i++) 
    { 
        for (j = 0; j <= n; j++) 
        { 
        if (i == 0 || j == 0)L[i][j] = 0;
      
        else if (X[i - 1] == Y[j - 1]) L[i][j] = L[i - 1][j - 1] + 1; 
      
        else L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
        } 
    } 
    cout<< L[m][n] <<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/