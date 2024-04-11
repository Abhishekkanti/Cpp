#include <iostream>
using namespace std;

int main(){
    for(int row=0;row<=5;row++){
          if(row==0 || row==5){
               for(int col=0;col<=5;col++){
                   cout<<"*"<<"\t";
                  }
           }
          else{
                 cout<<"*";
                 for(int sp=0;sp<5;sp++){
                     cout<<"\t";
                     }
                 cout<<"*";
             }
  
    cout<<endl;
         }
    }
