#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e8 + 10;
int dist[N];
int vis[N];
vector<pair<int,int>>graph[N];
int n, m;



int djiktra(int source){
        for(int j=0;j<=n;j++){
            dist[j]=INF;
        }
        set<pair<int,int>>s;
        dist[source]=0;
        s.insert({dist[source], source})
        
        while(s.size() > 0){
            auto curr = *s.begin();
            int curr_wt = curr.first;
            int curr_v = curr.second;
            s.erase(s.begin());
            if(vis[curr_v])continue;
            vis[curr_v]=1;
            
                for(auto child : graph[curr_v]){
                    int child_v = child.first;
                    int child_wt = child.second;
                    if(vis[child_v])continue;
                    if(dist[curr_v] + child_wt < dist[child_v] ){
                        dist[child_v] = dist[curr_v] + child_wt;
                       
                        s.insert({dist[child_v],child_v});

                    }
                }
        }
}

int main()
{   
    cin >> n >> m;
    for(int i =0 i< m ; i++){
        int x, y, wt;
        cin >> x >> y >> wt;
        graph[x].push_back({y, wt});
    }


}