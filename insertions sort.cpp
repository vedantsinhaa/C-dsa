#include <iostream>
#include <algorithm>

using namespace std;




void insertionsort(int *arr, int n){
    int j;
    for(int i=1;i<=n-1;i++){
        int startpos=arr[i];
        for( j=i-1;j>=0;j--){
            if(arr[j]>startpos){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1]=  startpos;
    }
}





int main()
{int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
cout<<"entered array"<<endl;;
for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
}
insertionsort(arr,N);
cout<<endl<<"after soring "<<endl;

for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
}

   return 0;
}