#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    cout << max(a,b) << ": Is greater";
    
    return 0;
}

int max(int a,int b){
    if(a>b){
        return a;
        }     
    else{
        return b;
    }
}