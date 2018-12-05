#include <iostream>
using namespace std;

int main (){
    int y,t;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> y;
        if(y%400==0){
            cout << "a leap year" << endl;
        }
        else if(y%100==0){
            cout << "a normal year" << endl;
        }   
        else if(y%4==0){
            cout << "a leap year" << endl;
        }
        else{
            cout <<"a normal year" << endl;
        }
    }
    return 0;

}
