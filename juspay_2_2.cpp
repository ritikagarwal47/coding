#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int shortestChainLen(string start, string target,set<string>& D)
{
    if(start == target)
      return 0;
    if (D.find(target) == D.end())
        return 0;
    int level = 0, wordlength = start.size();
    queue<string> Q;
    Q.push(start);
    while (!Q.empty()) {
        ++level;
        int sizeofQ = Q.size();
        for (int i = 0; i < sizeofQ; ++i) {
            string word = Q.front();
            Q.pop();
            for (int pos = 0; pos < wordlength; ++pos) {
                char orig_char = word[pos];
                for (char c = 'a'; c <= 'z'; ++c) {
                    word[pos] = c;
                    if (word == target)
                        return level + 1;
                    if (D.find(word) == D.end())
                        continue;
                    D.erase(word);
                    Q.push(word);
                }
                word[pos] = orig_char;
            }
        }
    }
 
    return 0;
}
void solve()
{
    set<string> D;
    // D.insert("poon");
    // D.insert("plee");
    // D.insert("same");
    // D.insert("poie");
    // D.insert("plie");
    // D.insert("poin");
    // D.insert("plea");
    string start;cin>>start;
    string target;cin>>target;
    int N;cin>>N;
    for(int i=0;i<N;++i)
    {
        string s;cin>>s;D.insert(s);//cout<<s<<' ';
    }
    D.insert(start);
    D.insert(target);
    cout <<shortestChainLen(start, target, D)-1;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/