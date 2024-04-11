#include <iostream>
using namespace std;

int main(){
    //For Row
    for (int i = 0; i < 8; i++){
        //For Column 
        for (int j = 0; j < 4; j++) {
            cout << "*"<< " ";
        }
        cout << endl;
    }
    return 0;
}