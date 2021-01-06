#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
int A[10][10]={0},vis[10][10];
bool valid(int i,int j)
{
    if(i<0 or j<0 or i>7 or j>7)return false;
    if(vis[i][j]==1)return false;
    return true;
}
void solve()
{
    string s1,s2;cin>>s1>>s2;
    int x1 = (s1[0] - 'a'),x2 = (s2[0] - 'a') , y1 = (s1[1] - '1') , y2 = (s2[1] - '1');
    //cout<<x1<<' '<<x2<<' '<<y1<<' '<<y2<<'\n';
    memset(vis,0,sizeof(vis));
    queue<pair<int,int>> Q;    
    Q.push({x1,y1});
    A[x1][y1] = 0;
    vis[x1][y1] = 1;
    int dx[]={-2,-1,1,2,2,1,-1,-2};
    int dy[]={1,2,2,1,-1,-2,-2,-1};
    while (!Q.empty())
    {
        int i = Q.front().first;
        int j = Q.front().second;
        //cout<<i<<' '<<j<<'\n';
        Q.pop();
        for(int k=0;k<8;++k)
        {
            if((i + dx[k])== x2 and (j + dy[k]) == y2)
            {
                cout<< A[i][j] + 1 <<'\n';return;
            }
            if(valid(i + dx[k],j + dy[k]))
            {
                Q.push({i + dx[k],j + dy[k]});
                vis[i+dx[k]][j + dy[k]]=1;
                A[i+dx[k]][j + dy[k]] =  A[i][j] + 1;
            }
        }
        
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/