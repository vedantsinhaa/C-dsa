#include <iostream>
#include <algorithm>
using namespace std;

bool binarysearch(int *arr, int s, int e,int key){
  //base case

   if(s>e){
    return false;
   }




  //recursive case 
  int mid =(s+e)/2;
  if(arr[mid]==key){
    return true; 
  }
  else{
    if(arr[mid]<key){
        s=mid+1;//or  //binarysearch(arr,mid+1,e,key);
    }
    else{
        e=mid-1;//or //binarysearch(arr,s,mid+1,key);
    }
  }
  binarysearch(arr,s,e,key); //or //nothing here , if you are following the commented procedure 

}



int main()
{
  int arr[]={3,4,7823,4,58,67};
  int N= sizeof(arr)/sizeof(int);
  int key;
  cin>>key;
  sort(arr,arr+N);
  for(int i=0;i<N;i++){
      cout<<arr[i]<<" ";
  }
  if(binarysearch(arr,0,N-1,key)==true){
    cout<<"key is present";

  }
  else{
    cout<<"key is not present";
  }


   return 0;
}
