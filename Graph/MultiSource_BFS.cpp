#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e9 + 10;
int vis[N][N];
int val[N][N];
int level[N][N];
int n, m;


int bfs(){
    int max = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            max = max(max, val[i][j]);
        }
    }
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(val[i][j]==max){
                q.push({i,j});
                level[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
    }
 
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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> val[i][j];
        }
    }
}
   return 0;
}