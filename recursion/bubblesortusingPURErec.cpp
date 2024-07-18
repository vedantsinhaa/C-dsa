#include <iostream>
#include <algorithm>
using namespace std;

void bubblesort(int arr[],int n,int i){

//base case
if(i==n-1){
    return;
}


//recursive case

if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
}
bubblesort(arr,n,i+1);


}



int main()
{
    int arr[]={7,43,8,83,3};
    int N= sizeof(arr)/sizeof(int);
    bubblesort(arr,N,0);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}