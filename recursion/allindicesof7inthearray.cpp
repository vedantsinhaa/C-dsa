#include <iostream>
using namespace std;

void check7(int *arr, int n, int i){
    
    // //base case
    
    if(i==n){
        return;
    }


    // //recursive case
    if(arr[i]==7){

       
      cout<<i<<" ";
    }
     
    check7(arr,n,i+1);
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
  check7(arr,N,0);
//   if(check7(arr,N)==-1){
//       cout<<"no";
//   }
//   else{
//       cout<<"yes and it is at index "<<(check7(arr,N,0));
//   }

   return 0;
}