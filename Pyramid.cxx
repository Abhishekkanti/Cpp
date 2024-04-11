#include <iostream>
using namespace std;

int main(){
    for(int row=0;row<=5;row++){
        //For Spaces inverted
        for(int sp=5;sp>row;sp--){
            cout<<" ";
        }
        //For Stars till row
        for(int i=0;i<=row;i++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
    
    }