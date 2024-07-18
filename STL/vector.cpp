#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> a ;
   a.push_back(5);
   cout<< a.capacity()<<endl;
   a.push_back(8);
   cout<<a.capacity()<<endl;;
   a.push_back(10);
   cout<<"capacity--> "<<a.capacity()<<endl;
   cout<< "Size is ->" <<a.size()<<endl;
   cout<<a.front()<<" "<<a.back()<<endl;
   for(int i:a){
    cout<<i<<" ";
   }
   a.pop_back();
   cout<<endl;
   for(int i:a){
    cout<<i<<" ";
   }
   cout<<endl;
   a.push_back(10);
   cout<<*(a.end()-1);

   return 0;
}