#include <iostream>

using namespace std;

int main() {
    string s;cin>>s;
    int N = s.size();
    if(N&1)--N;
    for(int i=0;i<N;i+=2)
    {
        swap(s[i],s[i+1]);
    }
    cout<<s<<'\n';
}