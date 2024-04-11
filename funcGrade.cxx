#include <iostream>
using namespace std;

string grade(int marks);

int main(){
    int marks;
    cin>>marks;
    
    cout<<"Grade :"<<grade(marks);
    
}

string grade(int marks){
    switch(marks/10){
        case 10 : return "A"; break;
        case 9 : return "A"; break;
        case 8 : return "B"; break;
        case 7 : return "C"; break;
        case 6 : return "D"; break;
        default: return "Fail";
        }
}