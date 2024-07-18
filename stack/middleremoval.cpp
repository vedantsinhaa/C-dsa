#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int>s ;
    int arr[]={1,2,34,5,55,4,5,84};
    int n =sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(i!=(n/2)){
        int store=arr[i];
        s.push(store);
        }
    }
    int ans[n-1];
    for(int i=n-2;i>=0;i--){
        int element= s.top();
        ans[i]=element;
        s.pop();
    }

    for(int i=0;i<n-1;i++){
        cout<<ans[i]<<" ";
    }


   return 0;
}