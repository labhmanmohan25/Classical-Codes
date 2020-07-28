#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool BFS(vector<int> adj[], int src, int dest, int v,
                            int pred[], int dist[])
{
    list<int> queue;

    bool visited[v];

    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);

    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                // We stop BFS when we find
                // destination.
                if (adj[u][i] == dest)
                   return true;
            }
        }
    }

    return false;
}

int printShortestDistance(vector<int> adj[], int s,
                                    int dest, int v)
{
    int pred[v], dist[v];

//    if (BFS(adj, s, dest, v, pred, dist) == false)
//    {
//        return 0;
//    }
    
    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    return dist[dest];

}

int main()
{
    int v,x,y,n,k=1 ;
    int a[10000]={0};
    cin>>v>>x>>y;
    vector<int> adj[v];
    for(int i=1;i<n;i++)
    {
            add_edge(adj, i, i+1);
    }
    add_edge(adj, x,y);

    //int source = 0, dest = 7;
    for(int source=0;source<v-1;source++)
    {
        for(int dest=source+1;dest<v;dest++)
        {
            if(printShortestDistance(adj, source, dest, v)==k)
            a[k]++;
        }k++;
    }

    for(int i=1;i<k;i++)
    {
            cout<<a[i]<<"\n";
    }
    return 0;
}
