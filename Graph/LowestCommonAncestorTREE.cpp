//O(n)-->TC
// there are other algorithm as well O(logn)-->binary uplifting algo and there is one in O(1) 

#include<bits/stdc++.h>
using namespace std;
const int N =1e5 + 10;
vector<int>graph[N];
vector<int> par(N);

void dfs(int vertex, int parent){

    par[vertex]=parent;
    for(int child : graph[vertex]){

        if(child==parent)continue;
        dfs(child, vertex);
    }
}

vector<int> patharray(int v){
    vector<int>ans;
    while(v!=0){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,0);
    int node1 , node2;
    cin >> node1 >> node2 ;
    vector<int> path_node1 = patharray(node1);
    vector<int> path_node2 = patharray(node2);
    int z=min(path_node1.size(),path_node2.size());
    int LCA=-1;
    for(int k=0; k<z;k++){
        if(path_node1[k]==path_node2[k]){
            LCA = path_node1[k];
        }
        else{
            break;
        }
    }
    cout << LCA << endl;

}