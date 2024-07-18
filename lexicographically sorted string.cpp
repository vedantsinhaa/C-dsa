#include <iostream>
#include<cmath>
using namespace std;


int main()
{
      int x=0;
      int y=0;
      char ch;
      
      ch= cin.get();
      while(ch!='\n'){
           if(ch=='E'){
               x++;
           }
            else if(ch=='W'){
               x--;
           }
           else if(ch=='N'){
               y++;
           }
           else if(ch=='S'){
               y--;
           }
           
          
           ch= cin.get();

      }

      if(x>=0 && y>=0){
          for(int i=1;i<=x;i++){
              cout<<"E";
          }
          for(int j=1;j<=y;j++){
              cout<<"N";
          }

      }
        if(x<=0 && y>=0){
          for(int i=1;i<=y;i++){
              cout<<"N";
          }
          for(int j=1;j<=abs(x);j++){
              cout<<"W";
          }

      }
      if(x<=0 && y<=0){
          for(int i=1;i<=abs(y);i++){
              cout<<"S";}
          for(int j=1;j<=abs(x);j++){
              cout<<"W";
          }
          
          }

      
       if(x>=0 && y<0){
          for(int i=1;i<=x;i++){
              cout<<"E";
          }
          for(int j=1;j<=abs(y);j++){
              cout<<"S";
          }

      }

    
  
    return 0;
}