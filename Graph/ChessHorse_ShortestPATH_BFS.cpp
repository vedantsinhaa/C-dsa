#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
const int INF = 1e5 + 10;
int vis[8][8];
int level[8][8];
vector<pair<int,int>>coordinates= {
    {2,1},{2,-1},
    {-2,1},{-2,-1},
    {1,2},{-1,2},
    {1,-2},{-1,-2},
    
};

bool isValid(int x , int y){
    return x >= 0 && y >= 0 && x<8 && y < 8 ;
}
int bfs(string source, string dest){
    
    //converting the source and destination string into integer for matrix representtation 
    int sourceX = source[0] - 'a';
    int sourceY = source[1] - '1';
    int destX   = dest[0] - 'a';
    int destY   = dest[1] - '1';

    queue<pair<int,int>>q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY]=1;
    level[sourceX][sourceY]=0; //important line as when we calculate the level in line 46 it should start with 0 and then add on otherwise after reset if it is INF then levels will be INF + 1 as so on.

    while(!q.empty()){
        pair<int,int> curr_v = q.front();
        q.pop();
        int x = curr_v.first;
        int y = curr_v.second;

        for(auto child : coordinates){
            int newX = x + child.first;
            int newY = y + child.second;
            if(!isValid(newX, newY))continue;
            if(vis[newX][newY])continue;

            q.push({newX, newY});
            vis[newX][newY]=1;
            level[newX][newY]= level[x][y] + 1;

        }
        //just a optimisation: if you get reach the required coordinates beforehand then why to complete the whole bfs
        if(!level[destX][destY]==INF){
            break;
        }

    }
    return level[destX][destY];
}

//after each testcase one has to reset the level and vis array , therefore the following:-
void reset(){
    for(int i=0;i<8;i++){
        for(int j =0 ; j<8; j++){
            level[i][j] = INF;
            vis[i][j]=0;
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1,s2) << endl;
        reset();

    }
}