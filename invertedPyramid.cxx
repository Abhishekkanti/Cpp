#include <iostream>
using namespace std;

int main(){
    for(int row=0;row<=5; row++){
        
        //For Spaces till row
        for(int i=0;i<=row;i++){
            cout<<" ";
            } 
        
        //For Stars Inverted till row
        for(int j=5;j>=row;j--){
            cout<<"* "; 
            } 
        
        cout<<endl; 
        } 
    
}