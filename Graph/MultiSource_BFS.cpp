#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e9 + 10;
int vis[N][N];
int val[N][N];
int level[N][N];
int n, m;

vector<pair<int,int>> movements = {
    {0,1},{0,-1},{1,0},{-1,0},{1,-1},{1,1},{-1,1},{-1,-1}
};

bool isValid(int x, int y){
    return x>=0 && y>=0 && y<m && x<n;
}

int bfs(){
    int maxi = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maxi = max(maxi, val[i][j]);
        }
    }
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxi==val[i][j]){
                q.push({i,j});
                level[i][j]=0;
                vis[i][j]=1;
            }
        }
    }
    int ans = 0 ;
    while(!q.empty()){
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop();
                for(auto movement : movements){
                    int child_x = v_x + movement.first;
                    int child_y = v_y + movement.second;
                    if(!isValid(child_x,child_y))continue;
                    if(vis[child_x][child_y])continue;

                    q.push({child_x,child_y});
                    vis[child_x][child_y]=1;
                    level[child_x][child_y] = level[v_x][v_y] + 1;
                    ans = max(ans, level[child_x][child_y]);

                }
    }
    return ans;
 
}

void reset(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            val[i][j]=0;
            level[i][j]=INF;
        }
    }
}

int main()
{
int t;
cin >> t;
while(t--){
    cin >> n >> m;
    reset();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> val[i][j];
        }
    }
    cout << bfs()<<endl;
}
   return 0;
}
