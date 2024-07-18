#include <iostream>

using namespace std;

int main()
{

    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

  for(int pos=0;pos<=n-2;pos++){
      int min =pos;
      for(int j=pos+1;j<n;j++){
          if(arr[j]<arr[min]){
              min=j;
          }
      }
      swap(arr[pos],arr[min]);
  }
    cout<<"after sorting";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}