#include <iostream>
#include <string>
using namespace std;


int convertstring(string s,int l){
   //base case
   if(l==0){
      return 0;
   }

   //recursive case
   int x= s[l-1]-'0';
   return convertstring(s,l-1)*10 + x;

}


int main(){
// { string s="12345";
//    int len= s.length();
//    cout<<convertstring(s,len);
//    return 0;

string s;
getline(cin,s);
int len=s.length();
cout<<convertstring(s,len);
}