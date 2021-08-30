#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll V=10000+5;
ll graph[10000+2][10000+2];
ll fun(string X,string Y)
{
    ll m = X.size();
    ll n = Y.size();
    ll LCSuff[m + 1][n + 1];
    ll result = 0;
    for (ll i = 0; i <= m; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) 
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}
ll findMaxVertex(bool visited[], ll weights[])
{
    ll index = -1;
    ll maxW = INT_MIN;
    for (ll i = 0; i < V; i++) 
    {
        if (visited[i] == false && weights[i] > maxW) 
        {
            maxW = weights[i];
            index = i;
        }
    }
    return index;
}
void printMaximumSpanningTree(ll parent[])
{
 
    ll MST = 0;
    for (ll i = 1; i < V; i++) {
 
        MST += graph[i][parent[i]];
    }
 
    cout <<  MST << '\n';
}
void maximumSpanningTree()
{
    
    bool visited[10000+5];
    ll weights[10000+5];
    ll parent[10000+5];
    for (ll i = 0; i < V; i++) 
    {
        visited[i] = false;
        weights[i] = INT_MIN;
    }
    weights[0] = INT_MAX;
    parent[0] = -1;
    for (ll i = 0; i < V - 1; i++) 
    {
        ll maxVertexIndex= findMaxVertex(visited, weights);
        
        visited[maxVertexIndex] = true;
        for (ll j = 0; j < V; j++) 
        {
            if (graph[j][maxVertexIndex] != 0 && visited[j] == false) 
            {
                if (graph[j][maxVertexIndex] > weights[j]) 
                {
                    weights[j] = graph[j][maxVertexIndex];
                    parent[j] = maxVertexIndex;
                }
            }
        }
    }
    printMaximumSpanningTree( parent);
}
void solve()
{
    ll N;cin>>N;
    V=N;
    vector<string> A;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;
        A.push_back(s);
    }
    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)
        {
            graph[i][j]=INT_MAX;
        }
    }

    for(ll i=0;i<N;++i)
    {
        for(ll j=i+1;j<N;++j)
        {
            // if(i>=j)
            // {
            //     graph[i][j]=INT_;
            // }
            // else 
            {
                ll p = fun(A[i],A[j]);
                graph[i][j] = graph[j][i] = p;
            }
        }
    }
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<N;++j)
    //     {
    //         cout<<graph[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    maximumSpanningTree();
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/