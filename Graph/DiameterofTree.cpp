//First find the node with the most depth and then from that node find the maximum depth.
//O(n)--> TC
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
int depth[N];

int dfs(int vertex, int parent){

    for(int child : graph[vertex]){

        if(child == parent)continue;
        depth[child]=depth[vertex] + 1;
        dfs(child, vertex);
    }
 
}
int main()
{   
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1,0);
    int maxi = 0;
    int max_depth_node=0;
    for(int j=1;j<=n;j++){
        if(depth[j]>maxi){
            maxi = depth[j];
            max_depth_node = j;
        }
    }

    for(int k=1;k<=n;k++){
       depth[k]=0;
    }
    // OR you can use the below to reset the depth array
    // fill(depth,depth+N,0);
    dfs(max_depth_node,0);
    maxi=0;
     for(int j=1;j<=n;j++){
        if(depth[j]>maxi){
            maxi = depth[j];
            
        }
    }

    cout << maxi<<endl;

   return 0;
}