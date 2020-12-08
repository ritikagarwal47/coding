#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,Q;cin>>N>>Q;cin.ignore();
    map<string,string> M;
    string s,curr="",temp="";
    for(ll i=0;i<N;++i)
    {
        getline(cin,s);
        string a,b,c;
        stringstream ss(s);
        while (getline(ss,a,' '))
        {
            if(a[0]=='<')
            {
                if(a[1]!='/') 
                {
                    b = a.substr(1);
                    if(b[b.size()-1]=='>')b.pop_back();
                    if(curr=="")curr=b;
                    else curr += '.' +  b ;
                }
                else
                {
                    b = a.substr(2,(a.find('>') -  2));
                    size_t pos = curr.find("." + b);
                    if (pos != string::npos)curr = curr.substr(0, pos);
                    else curr = "";
                }
            }
            else if(a[0]=='"')
            {
                size_t pos = a.find_last_of('"');
                string v = a.substr(1, pos-1);
                M[temp] = v;
            }
            else if(a!="=") temp = curr + "~" + a;
        }    
        //cout<<s<<'\n';    
    }
    //for(auto i : M)cout<<i.first<<' '<<i.second<<'\n';
    //cin.ignore();
    //string p;
    while(Q--)
    {
        getline(cin,s);
        //cout<<p<<'\n';
        if(M.find(s)!=M.end())cout<< M[s] <<'\n';
        else cout<<"Not Found!\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/