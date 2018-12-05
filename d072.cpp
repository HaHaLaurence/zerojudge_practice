#include <iostream>
using namespace std;

int main (){
    int y,t;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> y;
        if(y%400==0){
            cout << "Case " << i+1 <<": "<< "a leap year" << endl;
        }
        else if(y%100==0){
            cout << "Case " << i+1 <<": "<< "a normal year" << endl;
        }   
        else if(y%4==0){
            cout << "Case " << i+1 <<": "<< "a leap year" << endl;
        }
        else{
            cout << "Case " << i+1 <<": "<< "a normal year" << endl;
        }
    }
    return 0;

}
