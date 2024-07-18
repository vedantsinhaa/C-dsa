#include <iostream>
using namespace std;

void mergetwoarrays(int c[], int a[],int b[],int n1, int n2,int i, int j,int k){
    //base case
 if(k==n1+n2 || (i>n1-1 && j>n2-1)){
    return;
 }

    // recursive case
    if(a[i]>b[j]){
        c[k]=b[j];
        if(j<n2){
                mergetwoarrays(c,a,b,n1,n2,i,j+1,k+1);
                }
                else{ 
                      c[k]=a[i];
                      mergetwoarrays(c,a,b,n1,n2,i+1,j,k+1);

                    }
    }
    else{
      c[k]=a[i];
      if(i<n1){
               mergetwoarrays(c,a,b,n1,n2,i+1,j,k+1);
              }
      else{ 
                      c[k]=b[j];
                      mergetwoarrays(c,a,b,n1,n2,i,j+1,k+1);

                    }        
    }

    


}









int main()
{ int a[]={3,4,6};
  int N1=sizeof(a)/sizeof(int);
  int b[]={1,2,5,8,9,10};
  int N2=sizeof(b)/sizeof(int);
  int c[N1+N2];

  mergetwoarrays(c,a,b,N1,N2,0,0,0);

  for(int i=0;i<N1+N2;i++){
    cout<<c[i]<<" ";
  }
   return 0;
}