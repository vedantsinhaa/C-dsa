#include <iostream>
#include <algorithm>

void bubblesort(int *arr, int n,int i,int j){
    int temp;
    //base case
if(i==n-1){
    return;
}



    ///recursive case                                      //recursive case

    if(j==n-1-i){                                           //  if(j==n-1-i){
                                                            //             return;
                                                            //              }
        bubblesort(arr,n,i+1,0);             //OR           //  else{
                                                                       //swapping...
                                                            //  }          
        return;
    }                                                       // bubblesort(arr,n,i,j+1)
    else{                                                   //bubblesort(arr,n,i+1,0)
  if(arr[j]>arr[j+1]){
      //swap(arr[j],arr[j+1]);
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
  }
    }

  bubblesort(arr,n,i,j+1);
  


}





using namespace std;
int main() {
    int arr[]={8,5,38,3,568,24};
    int N= sizeof(arr)/sizeof(int);
    bubblesort(arr,N,0,0);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}