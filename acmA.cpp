#include<bits/stdc++.h>
using namespace std;
#define ll long long
string p ;
ll ans=0;
vector<ll> adj[1000];
map<string,ll> M;
bool vis[1000];
void dfs(ll v)
{
    vis[v] = 1;
    ++ans;
    //cout<<v<<'\n';
    for(ll i: adj[v])
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{      
    ifstream inFile;
    inFile.open("input.txt");
    if (!inFile) {
        exit(1); 
    }
    string s;ll x=1;
    //int mini=INT_MAX;
    ofstream out_file;
    out_file.open("output.txt");
    
    while (getline(inFile, s)) 
     {  
         string name="",sal="",ceo="";
    bool f1=true,f2=false,f3=false;
    for(long i=0;s[i];++i)
    {
        //if(s[i]==',')continue;
        if(s[i]==' ')continue;
        if(f1)
        {
            if(s[i]!=',')name += s[i];
            else 
            {
                f1=false;
                f2=true;
            }
        }
        else if(f2)
        {
            
            if(s[i]!=',')sal += s[i];
            else 
            {
                f2=false;
                f3=true;
            }            
        }
        else if(f3)
        {
            ceo += s[i];          
        }
        
    }
        if(ceo=="NOBODY")
    {
        p = name;
    }
    else{
    if(M[name]==0)M[name]=x++;
    if(M[ceo]==0)M[ceo]=x++;
    adj[M[name]].push_back(M[ceo]);
    adj[M[ceo]].push_back(M[name]);
    ///string str = s.substr(s.size()-7,6);
    //cout<<name<< ' '<<ceo<<'\n';
    //cout<<M[name]<<' '<<M[ceo]<<'\n';

        //out_file << s<< endl;
    }
     }
    //cout<<p<<'\n';
    inFile.close();
    dfs(M[p]);
    out_file << ans<< endl;
    return 0;
}