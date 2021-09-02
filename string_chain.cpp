#include<bits/stdc++.h>
//#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int lcs(string X,string Y) 
{ 
    int m = X.size();
    int n = Y.size();
    int L[m + 1][n + 1]; 
    int i, j; 
    for (i = 0; i <= m; i++) 
    { 
        for (j = 0; j <= n; j++) 
        { 
        if (i == 0 || j == 0) 
            L[i][j] = 0; 
      
        else if (X[i - 1] == Y[j - 1]) 
            L[i][j] = L[i - 1][j - 1] + 1; 
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
        } 
    } 
    return L[m][n]; 
}
bool check(string s,string t)
{
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int c=0;
    int j=0;
    for(int i=0;t[i];++i)
    {
        if(s[j]==t[i])++j;
        else ++c;
        if(c>1)return false;
    }
    return true;
}
int longest_chain(vector<string> w)
{
    map<string,int> M;
    vector<string> adj[62];
    for(auto i:w)
    {
        adj[i.size()].push_back(i);
        M[i] = 1;
    }
    for(int i=1;i<=60;++i)
    {
        for(auto j:adj[i])
        {
            for(auto k:adj[i+1])
            {
                if(check(j,k))
                {
                    int p = lcs(j,k);
                    if(p==i)M[k] = max(M[k],M[j] + 1);
                }
            }
        }
    }
    int ans=0;
    for(auto i:M)
    {
        ans=max(ans,i.second);
    }
    return ans;
}
void solve()
{
    int n;cin>>n;
    vector<string> w;
    for(int i=0;i<n;++i)
    {
        string s;cin>>s;
        w.push_back(s);
    } 
    cout<<longest_chain(w)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/