#include <iostream>
using namespace std;


//int evenSum(int n){
//    int res=0;
//    for(int i=2;i<=n;i+=2){
//            res = res+i;
//    return res;
//}


int evenSum(int n){
    int res=0;
    for(int i=1;i<=n;i++){
        if(i %2 == 0){
            res = res+i;
        }
     }
    return res;
}


int main(){
    int n;
    cout<<"Enter Value of N :";
    cin>>n;
    
    cout<<evenSum(n);
    cout<<endl;
    
    return 0;
    }