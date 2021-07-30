#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct node{
    int data;
    struct node *left = nullptr;
    struct node *right  = nullptr;
    node(int val)
    {
        data = val;
    }
};
void print(node*head)
{
    if(head==NULL)return;
    print(head->left);
    cout<<head->data<<' ';
    print(head->right);
}
void mirror(node* head)
{
    if(head=nullptr)return;
    mirror(head->left);
    mirror(head->right);
    swap(head->left,head->right);
}
void solve()
{
    node* head = NULL;
    node* pre = NULL;
    int n;
    cin>>n;// no of nodes 
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        node* new_node =  new node(x);// create a new node
        if(head==nullptr)
        {
            head = new_node;
            pre = new_node;
        }
        else
        {
            if(pre->left == NULL)
            {
                pre->left = new_node;
            }
            else
            {
                pre->right = new_node;
                pre = pre ->left;
            }
        }
    }
    print(head);
    mirror(head);
    cout<<'\n';
    print(head);
}
int main()
{
    solve();
    return 0;
}