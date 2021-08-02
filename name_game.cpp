#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<string> V;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;
        V.push_back(s);
    }
    queue<pair<string,ll>> q;
    //unordered_set<string> st(ar.begin(),ar.end());
       
        q.push(start);
        int ans=1;
        while(!q.empty())
        {
             int n=q.size();
             for(int i=0;i<n;i++)
             {
                 string cur=q.front();
                 q.pop();
                 string tmp=cur;
                 if(tmp==end)
                 {
                     return ans;
                 }
                 st.erase(tmp);
                 for(int j=0;j<cur.size();j++)
                 {   
                     char c=tmp[j];
                     for(int k=0;k<26;k++)
                     {
                         tmp[j]=k+'a';
                         if(st.find(tmp)!=st.end())
                         {
                             q.push(tmp);
                         }
                     }
                     tmp[j]=c;
                 }
                 
             }
            ans++;
        }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/