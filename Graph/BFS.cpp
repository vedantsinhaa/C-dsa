//O(V+E)--> TC
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
int vis[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;
        while(!q.empty()){
            int curr_v = q.front();
            q.pop();
            cout << curr_v << " ";
            for(int child : graph[curr_v]){
                if(!vis[child]){
                    q.push(child);
                    vis[child]=1;
                    level[child]=level[curr_v] + 1;
                }
            }
        } 
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }
    bfs(1);
    for(int j=1;j<=n;j++){
        cout <<  j << " Level is " << level[j] <<endl; 
    }
}