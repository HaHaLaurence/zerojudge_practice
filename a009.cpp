#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    while (cin >> a){
        for(int i=0;i<a.length();i++){
            a[i]=a[i]-7;
        }
        cout << a << endl;

    }
    return 0;
}
