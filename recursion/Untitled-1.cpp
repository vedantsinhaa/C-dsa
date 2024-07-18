#include <iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<int>nitya={1,2,3,5};
    vector<int> vedant(nitya.begin(),nitya.end());
    for(int i=0;i<vedant.size();i++){
        cout<<vedant[i]<<" ";
    }

   return 0;
}