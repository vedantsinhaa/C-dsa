#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>>graph[n];

    for(int i=0;i<m;i++){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back({v2,wt});
        graph[v2].push_back({v1,wt});
    }
}