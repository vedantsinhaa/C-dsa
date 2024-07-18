#include <iostream>
using namespace std;

void increasing(int n){
    //base case
if(n==1){
    cout<<"1"<<endl;
    return;
}


    //recursive case 
    
    
    increasing(n-1);
    cout<<n<<endl;
}


int main() {
    int N;
    cin>>N;
   increasing(N);
    return 0;
}
