#include <iostream>
#include<cmath>
using namespace std;

int binarysearch(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
             }    
              return -1;  
}



int main()
{
    int tb;
    cin>>tb;
int arr[tb];
int key;

for(int i=0;i<tb;i++){
    cin>>arr[i];
}
int n= sizeof(arr)/sizeof(int);
cout<<"enter the key to be found in the array";
cin>>key;
    
  cout<<" The key is present at the index "<< binarysearch(arr,n,key);
    return 0;
}