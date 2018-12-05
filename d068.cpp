#include <iostream>
using namespace std;

int main(){
    int w;
    while (cin >> w){
        if(w>50){
            cout << w-1 << endl;
        }
        else {
            cout << w << endl;
        }
    }

    return 0;
}
