#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
vector<pair<int,int>> adj(10000+4);
bool vis[10000+4];
struct Node 
{ 
    string data; 
    Node* left, * right; 
}; 
Node* newNode(string data) 
{ 
    Node* node = (Node*)malloc(sizeof(Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
void inOrder(Node* root) 
{ 
    if (root != NULL) 
    { 
        inOrder(root->left); 
        if(root->data!="-" and (root->left!=NULL or root->right!=NULL))cout << root->data <<" "; 
        inOrder(root->right); 
    } 
} 
Node* insertLevelOrder(vector<string> arr, Node* root, int i, int n) 
{ 
    // Base case for recursion 
    if (i < n) 
    { 
        Node* temp = newNode(arr[i]); 
        root = temp; 
  
        // insert left child 
        //if(arr[2*i + 1]!="-")
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n); 
        //else root->left = NULL;//insertLevelOrder(arr, root->left, 2 * i + 1, n); 
  
        // insert right child 
        //if(arr[2*i + 2]!="-")
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n); 
        //else root->right = NULL;
    } 
    return root; 
}  
void solve()
{
    string S, T; getline(cin, S);
    //cout<<S<<'\n';
    stringstream X(S); 
    vector<string> V;
    while (getline(X, T, ' ')) 
    {
        V.push_back((T));
    }   
    Node* root = insertLevelOrder(V, root, 0,V.size()); 
    inOrder(root); 
    
    // //for(auto i : V)cout<<i<<' ';
    // for(int i=1;i<V.size();++i)
    // {
    //     if(V[i]=="-")continue;
    //     if(V[2*i]!="-")//V[2*i + 1]!="-")
    //     {
    //         adj[stoi(V[i])].first = stoi(V[2*i]);
    //     }
    //     if(V[2*i + 1]!="-")//V[2*i + 1]!="-")
    //     {
    //         adj[stoi(V[i])].second = stoi(V[2*i + 1]);
    //     }
    // }
    // for(auto i: adj)
    // {
    //     cout<<i.first<<'\n';
    // }
    // //dfs(stoi(V[1]));

}
int main(void)
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T=1;           //  cin>>T;
    while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/