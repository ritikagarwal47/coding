#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
class Node{
     
public:
    ll val;
    ll count;
    Node* left;
    Node* right;
    Node(ll num1, ll num2)
    {
        this->val = num1;
        this->count = num2;
        this->left = this->right = NULL;
    }
};
ll addNode(Node*& root, ll value,ll countSmaller)
{
    if (root == NULL)
    {
        root = new Node(value, 0);
        return countSmaller;
    }
    if (root->val < value)
    {
        return root->count +
       addNode(root->right,value,countSmaller + 1);
    }
    else
    {
        root->count++;
        return addNode(root->left, value,countSmaller);
    }
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll ans[N] = {0};
 
    Node* root = NULL;
     
    for(ll i = N - 1; i >= 0; i--)
    {
        ans[i] = addNode(root, A[i], 0);
    }
    ll res=0;
    for(ll i = 0; i < N; ++i)res += ans[i];
    cout<<res<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}