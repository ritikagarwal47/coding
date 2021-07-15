#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct node{
    int data;
    struct node *next=NULL;
    node(int val)
    {
        data = val;
    }
};
// void fun(node* head)
// {
//     //if(head==NULL or head->next==NULL)return head;
//     int c=0;
//     node* root=head;
//     while(root!=NULL)
//     {
//         ++c;
//         root = root->next;
//     }
//     if(c&1)
//     {

//     }
//     else
//     {
//         root=head;
//         node* nxt = NULL;
//         node* prev = NULL;
//         int p = 0;
//         while (p<c/2) 
//         {
//             nxt = root->next;
//             root->next = prev;
//             prev = root;
//             root = nxt;
//             p++;
//         } 

//     }
//     //return head;
// }

void fun(node* head)
{
    node* root= head;
    vector<int> V;
    while(head!=NULL)
    {
        V.push_back(head->data);
        head=head->next;
    }
    int l = 0,r = V.size()-1;
    while(l<r)
    {
        int c = V[l] + V[r];
        V[l] = V[r] = c;
        ++l;--r;
    }
    head = root;
    for(int i=0;i<V.size();++i)
    {
        head->data  = V[i];
        head = head -> next;
    }
    //return root;
}
void solve()
{
    node* head = NULL;
    node* pre = NULL;
    for(int i=0;i<6;++i)
    {
        int n;cin>>n;
        node* nn = new node(n);
        if(head==NULL)
        {
            head = nn;
            pre = nn;
        }
        else
        {
            pre->next = nn;
            pre = nn;
        }
    }
    fun(head);
    while(head!=NULL)
    {
        cout<< head->data<<' ';
        head=head->next;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/