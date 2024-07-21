#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int>graph[N];
int vis[N];

int dfs(int vertex, int par){
    vis[vertex]=1;
    for(int child : graph[vertex]){
        if(vis[child]==1 && child!=par)return 1;
        if(vis[child]==1)continue;

    
        
        dfs(child, vertex);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i=0; i<e ; i++){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1; i<=n;i++){
        if(dfs(i,i)==1){
            cout<<"loop exist"<<endl;
            break;
        }
        
    }

}