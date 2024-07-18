#include <iostream>
#include<cmath>
using namespace std;

int lengthofstring(char *arr){
    int co=0;
    for(int i=0;arr[i]!='\0';i++){
        co++;
    }
    return co;
}


int main()
{
    
   int i=0;
    char arr[100];
    cin.getline(arr,100);
    lengthofstring(arr);
    int lengthofstring1 = lengthofstring(arr);
    cout<<lengthofstring1<<endl;
    for( i=0;i<=(lengthofstring1)/2;i++){//i =0
        if(arr[i]==arr[(lengthofstring1)-i-1]){//arr[0]==arr[4],arr[1]==arr[3]
            continue;
        }
        else{
            break;
        }
    }
        if(i==((lengthofstring1)/2)+1){
            cout<<"palindrome number";
        }
        else{
            cout<<"not a palindrome number";
            }
        
    
    return 0;                     
    
}