#include <iostream>
using namespace std;

void check7(int *arr, int n){
    //base case
    if(n<0){
        return;
    }



    //recursive case
    if(arr[n-1]==7){
        cout<<"yes it has 7 in it;
    }
    check7(arr,n-1);


}











int main()
{
  int N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  cout<<endl<<" Entered array is ";
  for(int i=0;i<N;i++){
    cout<<arr[i];
  }
  check7(arr,N);

   return 0;
}