#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool fun(string str1, string str2)
{
    if (str1.length() != str2.length())return false;
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}
void solve()
{
    string s1,s2;cin>>s1>>s2;
    if(fun(s1,s2))cout<<"Peter needs rest.";
    else cout<<"Is Peter fine?"; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/