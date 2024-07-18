#include <iostream>
using namespace std;

void subsequence( char in[],int i, char out[], int j){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }


    //recursive case
    subsequence(in,i+1,out,j);
    out[j]=in[i];
    subsequence(in,i+1,out,j+1);



}




int main()
{   
    char in[100];
    cin>>in;
    char out[100];

    subsequence(in,0,out,0);



   return 0;
}