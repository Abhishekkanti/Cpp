#include <iostream>
using namespace std;

void print(int num){
    num++;
    num++;
    cout<<num<<endl;
    num=num-5;
    cout<<num<<endl;
    }


int main(){
    int num= 10;
    num++;
    
    print(num);
    
    num--;
    cout<<num;
    return 0;
}