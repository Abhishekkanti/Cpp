#include <iostream>
using namespace std;


int sum(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int multi(int a,int b){
    return a*b;
}


int main(){
    int a,b;
    cin>>a >>b;
    
    cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum(a,b)<<endl;
    
    cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<sub(a,b)<<endl;
       
    cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<multi(a,b)<<endl;

    
    return 0;
}


    
    
    