#include <iostream>
using namespace std;

int check7(int *arr, int n){
    
    // //base case
    
    if(n<0){
        return -1;
    }


    // //recursive case
    if(arr[n-1]==7){

       
      return (n-1);
    }
     
    check7(arr,n-1);
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
  if(check7(arr,N)==-1){
      cout<<"no";
  }
  else{
      cout<<"yes and it is at index(for the last 7) "<<(check7(arr,N));
  }

   return 0;
}