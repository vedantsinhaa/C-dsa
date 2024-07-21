#include <bits/stdc++.h>
using namespace std;
const int N=  1e3 + 10;
vector<int>g[N];
bool vis[N];
void dfs(int vertex){
    // action on vertex after entering vertex
        cout << vertex << endl;
        vis[vertex]= true;

        for(int child : g[vertex] ){

            if(vis[child]==true) continue;
            //action on child before entering the child
            dfs(child);
            //action on child after exiting the child
        }
    //action on vertex before exiting the vertex    
}

int main()
{  int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

   return 0;
}
