#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int path_to_a_goal(string s, int n, int x, int y) {
    int previous_similar[s.length()];
    int L = -1;
    int R = -1;
    for (int i = 0; i <s.length(); i++) {
        if (s[i] == 'l') {
           previous_similar[i] = L;
            L = i;
        } else {
            previous_similar[i] = R;
            R = i;
        }
    }
    long goal[s.length()+1][n+1];
    for(int i=0;i<=s.length();i++)
    {
        for(int j=0;j<=n;j++)
        {
            goal[i][j]=0;
        }
    }
    goal[0][x] = 1;
    for (int i = 1; i <= s.length(); i++) {
        for (int j = 0; j <= n; j++) {
            goal[i][j] = goal[i-1][j];
            if (s[i-1] == 'l') {
                if (j+1 <= n) goal[i][j] += goal[i-1][j+1];
                if (j+1 <= n && previous_similar[i-1] >= 0) goal[i][j] -= goal[previous_similar[i-1]+1-1][j+1];
            } else {
                if (j-1 >= 0) goal[i][j] += goal[i-1][j-1];
                if (j-1 >= 0 && previous_similar[i-1] >= 0) goal[i][j] -= goal[previous_similar[i-1]+1-1][j-1];
            }
            goal[i][j] = (goal[i][j] + M) % M;
        }
    }
    return goal[s.length()][y];
}
int main()
{
   string s;
   int n,x,y;
   cin>>s>>n>>x>>y;
   cout<<path_to_a_goal(s,n,x,y);
    return 0;
}