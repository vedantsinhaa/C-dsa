#include <iostream>
using namespace std;
int main() {
   
    cout<<"enter the number of rows and cols";
    int rows, cols;
    int arr[100][100];
    cin>>rows>>cols;
    cout<<" enter the 2-d array";
    for(int i=0;i<=rows-1;i++){
        for(int j=0;j<=cols-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<" entered 2-d array is "<<endl;
     for(int i=0;i<=rows-1;i++){
        for(int j=0;j<=cols-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sc=0;
    int ec= cols-1;
    int sr=0;
    int er=rows-1;
    while(sc<ec){
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        
         for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        
        if(sr<er){
         for(int i=ec;i>=sc;i--){
            cout<<arr[er][i]<<" ";
        }
        er--;
        }
         
         if(sc<ec){
          for(int i=er;i>=sr;i--){
            cout<<arr[i][sc]<<" ";
        }
        sc++;
         }
    }

 return 0;
}
