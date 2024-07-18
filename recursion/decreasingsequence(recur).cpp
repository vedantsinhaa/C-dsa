#include <iostream>
using namespace std;

void decreasing(int n){
    //base case
if(n==1){
    cout<<"1";
    return;
}


    //recursive case 
    
    cout<<n<<endl;
    decreasing(n-1);
}


int main() {
    int N;
    cin>>N;
   decreasing(N);
    return 0;
}
