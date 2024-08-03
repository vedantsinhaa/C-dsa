// Chef and reversing problem : directed graph given- how many minimum number of edge direction change required to reach from 1 to nth node
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e5 + 10;
vector<pair<int,int>>graph[N];
vector<int> level(N, INF);
int n, m;

int bfs(int source){
    deque<int> q;
    q.push_back(source);
    level[source]=0;
        while(!q.empty()){
            int curr_v = q.front();
            q.pop_front();
            for(auto& child : graph[curr_v]){
                int wt = child.second;
                int child_v = child.first;
                if(level[curr_v]+wt < level[child_v]){
// From 18th minute onwards (VERY IMPORTANT : https://www.youtube.com/watch?v=SQOQ99stCas&list=PLauivoElc3ghxyYSr_sVnDUc_ynPk6iXE&index=14&ab_channel=Luv
                    level[child_v] = level[curr_v] + wt;
                    if(wt == 1){
                         q.push_back(child_v);
                    }
                    else{
                    q.push_front(child_v);
                    }
            }
        }
    }    
        return level[n] == INF ? -1 : level[n];
}


int main()
{
    
    cin >> n >> m;
    for(int i=0;i<m;i++){
        //taking input for directional graph
        int x, y;
        cin >> x >> y;
        graph[x].push_back({y,0});
        //now add a weighted edge of wt = 1; int the opposite direction of the original given graph for each input.
        graph[y].push_back({x,1});
    }
    cout << bfs(1) << endl;
}