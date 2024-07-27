#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int>graph[N];
int subtree_sum[N];
int val[N];

int dfs(int vertex, int parent){

    subtree_sum[vertex] = val[vertex];
    for(int child : graph[vertex]){
        if(child == parent)continue;

        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
    }

 
}
int main()
{
        int n;
        cin >> n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,0);
    int maxi = 0;
    int subtree_sum1=0;
    for(int i=2;i<=n;i++){
        subtree_sum1 = subtree_sum[1]-subtree_sum[i];
        maxi = max(maxi, subtree_sum1*subtree_sum[i]);
    }
    cout << maxi <<endl;
}