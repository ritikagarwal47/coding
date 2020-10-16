#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
// void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi,vector<string> &V) 
// { 
//     if (i == m - 1) 
//     { 
//         string s="";
//         for (int k = j; k < n; k++) 
//             path[pi + k - j] = *((mat + i*n) + k); 
//         for (int l = 0; l < pi + n - j; l++) 
//             s +=path[l];
//             //cout << path[l] << " "; 
//         //cout << endl; 
//         V.push_back(s);
//         return; 
//     } 
//     if (j == n - 1) 
//     { 
//         string s="";
//         for (int k = i; k < m; k++) 
//             path[pi + k - i] = *((mat + k*n) + j); 
//         for (int l = 0; l < pi + m - i; l++) 
//             s +=path[l];
//             //cout << path[l] << " "; 
//         //cout << endl; 
//         V.push_back(s);
//         return; 
//     } 
//     path[pi] = *((mat + i*n) + j); 
//     printAllPathsUtil(mat, i+1, j, m, n, path, pi + 1,V); 
//     printAllPathsUtil(mat, i, j+1, m, n, path, pi + 1,V); 
// } 
// void printAllPaths(int *mat, int m, int n, vector<string> &V) 
// { 
//     int *path = new int[m+n]; 
//     printAllPathsUtil(mat, 0, 0, m, n, path, 0,V); 
// } 
//    vector<string> V;
//    int N,M;cin>>N>>M;
//    int mat[N][M];
//    for(int i=0;i<N;++i)
//    {
//        for(int j=0;j<M;++j)cin>>mat[i][j];
//    }
//    printAllPaths(*mat,M,N,V);
//    for(int i=0;i<V.size();++i)cout<<V[i]<<'\n';
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N][M];
   for(ll i=0;i<N;++i)
   {
       for(ll j=0;j<M;++j)cin>>A[i][j];
   }
   string s;cin>>s;
   string s1=s;
   ll P,Q;cin>>P>>Q;
    ll c1=0,c2=0;
    for(ll i=0;i<N;++i)
    {
        //ll a=i;
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]!=(s[i+j] - '0'))
            {
                if(s[i+j]=='1')s[i+j]='0';
                else s[i+j] = '1';
                c1++;
            }
            //cout<< A[i][j] <<' ' <<s[a]<<' ' <<c<<'\n';
        }
    }
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        //ll a=i;
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]!=(s1[i+j]- '0'))c++;
            //cout<< A[i][j] <<' ' <<s[a]<<' ' <<c<<'\n';
        }
    }
    //cout<<c1<<' '<<c <<'\n';
    cout<< min(P,Q) * min(c1,c) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/