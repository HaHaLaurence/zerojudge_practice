#include <iostream>
using namespace std;

int main (){
    int hh,mm;
    while(cin >> hh >>mm){
        if((hh<17)&&(hh>7)){
            cout << "At School" << endl;
        }
        else if ((hh==7)&&(mm>=30)){
            cout << "At School" << endl;
        }
        else {
            cout << "Off School" << endl;
        }
    }
    return 0;
}


