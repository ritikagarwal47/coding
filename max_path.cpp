#include <bits/stdc++.h>

using namespace std;

int N, Q;
vector<int> adj[100001];
int sz[100001];
int parent[100001];
int level[100001];
int son[100001];
int top[100001];
int newid[100001], nextid;
int in[100001];
int out[100001];
int seg[262144];
int lazy[262144];

void dfs(int u, int p)
{
    sz[u]=1;
    for(auto& v: adj[u]) if(v!=p)
    {
        parent[v]=u;
        level[v]=level[u]+1;
        dfs(v, u);
        sz[u]+=sz[v];
        if(sz[v]>sz[son[u]])
            son[u]=v;
    }
}

void dfs2(int u, int p)
{
    in[u]=newid[u]=++nextid;
    if(son[parent[u]]==u)
        top[u]=top[parent[u]];
    else
        top[u]=u;
    if(son[u])
        dfs2(son[u], u);
    for(auto& v: adj[u]) if(v!=p && v!=son[u])
        dfs2(v, u);
    out[u]=nextid;
}

void down(int idx)
{
    if(lazy[idx])
    {
        seg[idx*2]+=lazy[idx];
        seg[idx*2+1]+=lazy[idx];
        lazy[idx*2]+=lazy[idx];
        lazy[idx*2+1]+=lazy[idx];
        lazy[idx]=0;
    }
}

void update(int idx, int begin, int end, int i, int j, int v)
{
    if(j<begin || end<i)
        return;
    if(i<=begin && end<=j)
    {
        seg[idx]+=v;
        lazy[idx]+=v;
    }
    else
    {
        down(idx);
        int mid=(begin+end)/2;
        update(idx*2, begin, mid, i, j, v);
        update(idx*2+1, mid+1, end, i, j, v);
        seg[idx]=max(seg[idx*2], seg[idx*2+1]);
    }
}

int query(int idx, int begin, int end, int i, int j)
{
    if(j<begin || end<i)
        return -1;
    if(i<=begin && end<=j)
        return seg[idx];
    down(idx);
    int mid=(begin+end)/2;
    return max(query(idx*2, begin, mid, i, j),
               query(idx*2+1, mid+1, end, i, j));
}

int hld_query(int u, int v)
{
    int ret=INT_MIN;
    while(top[u]!=top[v])
    {
        if(level[top[u]]<level[top[v]])
            swap(u, v);
        ret=max(ret, query(1, 1, N, newid[top[u]], newid[u]));
        u=parent[top[u]];
    }
    if(level[u]>level[v])
        swap(u, v);
    ret=max(ret, query(1, 1, N, newid[u], newid[v]));
    return ret;
}

int main()
{
    scanf("%d", &N);scanf("%d", &Q);
    
    int a, b;
    for(int i=1; i<=N; i++)
    {
        scanf("%d%d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, -1);
    dfs2(1, -1);
    
    //char buf[5];
    for(int i=1;i<=N;++i)
    {
        cin>>a;
        update(1, 1, N, in[i], out[i], a);
    }
    while(Q--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", hld_query(a, b));
    }
    return 0;
}
