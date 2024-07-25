#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
int subtree_sum[N];



void dfs(int vertex, int par){
    //this is part where write what happens with the node itself
  subtree_sum[vertex] += vertex;  
  for(int child : graph[vertex]){
    if(child==par)continue;
    
    dfs(child, vertex);
    //part where you write what happens with the child and its parent while backtracking
    subtree_sum[vertex] += subtree_sum[child];
  }

}


int main(){
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }
    
    dfs(1,0);
    for(int it=1; it<=n;it++){
        cout<<subtree_sum[it]<<endl;
    }
    return 0;
}
   
