#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World " <<"\n";
    cout<<endl;
    
    int a;
    cout << "Enter your Marks" << endl;
    cin >> a;

    if (a >= 90){
        cout << "A grade";
    }
    else if (a >= 80){
        cout << "B grade";
    }
    else if (a >= 60){
        cout << "C grade";
    }
    else if (a >= 40){
        cout << "C grade";
    }
    else{
        cout << "Fail";
    }
    
}