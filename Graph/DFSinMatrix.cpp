#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
 void dfs(int i, int j, vector<vector<int>>& image, int color, int intialcolor){
        int n = image.size();
        int m = image[0].size();
        if(i<0 || j <0)return;
        if(i>=n || j>=m)return;
        if(image[i][j]!= intialcolor)return ;

        image[i][j]=color;

        dfs(i-1,j,image,color,intialcolor);
        dfs(i+1,j,image,color,intialcolor);
        dfs(i,j-1,image,color,intialcolor);
        dfs(i,j+1,image,color,intialcolor);
 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int intialcolor = image[sr][sc];
        if(intialcolor != color){
        dfs(sr , sc, image, color, intialcolor);
        }
        return image;
    }
};
// int main()
// {
//    int n;
//    cin >> n ;
//    vector<vector<int>>matrix(n,vector<int>(n));

//    for(int i=0;i<n; i++){
//     for(int j=0; j<n; j++){
//         int a;
//         cin >> a;
//         matrix[i][j]=a;

        
//     }
//    }
//     for(int i=0;i<n; i++){
//     for(int it : matrix[i]){
//        cout << it << " ";
//     }
//     cout << endl;
//    }



//    return 0;
// }