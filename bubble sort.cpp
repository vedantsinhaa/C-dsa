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

    for(int iter=0; iter<=n-2; iter++){
        for(int j=0;j<=n-2-iter;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                               }
                                    } 
    }
    cout<<"after sorting";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}