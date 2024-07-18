#include <iostream>
using namespace std;

int fibo(int n){
    //base case
   if(n==0||n==1){
    return n;
   }


    //recursive case
    return fibo(n-1)+fibo(n-2);
}







int main()
{
int N;
N=6;
cout<<fibo(N)<<endl;

   return 0;
}