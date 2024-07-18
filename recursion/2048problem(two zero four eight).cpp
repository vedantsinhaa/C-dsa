#include <iostream>
#include <string>
using namespace std;
string s[] ={"zero","one","two","three","four","five","six","seven","eight","nine"};

void numbername(int n){

    //base case
    if(n==0){
        return;
    }




    //recursive case
     numbername(n/10);
    int x=n%10;
    cout<< s[x]<<" ";  
    


}



int main()
{
    int N;
    cin>>N;
    numbername(N);
   return 0;
}