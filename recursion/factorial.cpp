#include <iostream>
using namespace std;



int factorial(int n){
    //base case
   if(n==0){
    return 1;
   }   


   
    //recursive case

    return n*factorial(n-1);
}






int main()
{
   int N;
   N=6;
   cout<<factorial(N)<<endl;


   return 0;
}