#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
    string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++){
          if(i <= 9){
              cout<<word[i]<<endl;
          }
          else{
                  if(i %2 ==0){
                        cout<<"even\n";
                   }
                 else{
                        cout<<"odd\n";
                  }
          }
    }
    
    return 0;
}