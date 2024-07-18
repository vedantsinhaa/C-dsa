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
    cout<<"Wave Print"<<endl;
    for(int i=0;i<=cols-1;i++){
        if(i%2==0){
            for(int j=0;j<=rows-1;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=rows-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
        }
    }

  

}
 return 0;
}
