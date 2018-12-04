#include <iostream>
using namespace std;

int main(){
    int i;
    while(cin >> i ){
        if(i%2==1)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
    return 0;
}
