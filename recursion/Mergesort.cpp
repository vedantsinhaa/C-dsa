
//remember to learn the flow and control of merge sort!!!!!!!!!!!




#include <iostream>
using namespace std;
 
void mergetwosortedarray(int *arr,int s, int e){
     int mid=(s+e)/2;
    
    int i=s;
    int j=mid+1;
   
    int k=s;
    int temp[1000];

    while(i<=mid&& j<=e){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }

    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=e){
        temp[k]=arr[j];
        j++;
        k++;
    }


    for(int i=0;i<=e;i++){
        arr[i]=temp[i];
    }
}



void mergesort(int *arr,int s, int e){
//base case
if(s>=e){
    return;
}

//recursive case
     //divide
    int i=s;
    int j=e;
    int mid=(s+e)/2;
   //sort
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
   //merge
   mergetwosortedarray(arr,s,e);


}


int main()
{
   int arr[]={4,2,1,5,3,6,3,2};
   int N= sizeof(arr)/sizeof(int);

   mergesort(arr,0,N-1);

   for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
   }

   return 0;
}