#include <iostream>
using namespace std;

int check7(int *arr, int n,int i){
    
    // //base case
    
    if(i==n){
        return -1;
    }


    // //recursive case
    if(arr[i]==7){

       
      return (i);
    }
     
    check7(arr,n-1,i+1);
//     if(arr[i]==7){
//         return i;
//     }
// check7(arr,n,i+1)

}



int main()
{
  int N;
  cin>>N;//6 -1 =5
  int arr[N];
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  cout<<endl<<" Entered array is ";
  for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
  }
  if(check7(arr,N,0)==-1){
      cout<<"no";
  }
  else{
      cout<<"yes and it is at index(for the first 7) "<<(check7(arr,N,0));
  }

   return 0;
}