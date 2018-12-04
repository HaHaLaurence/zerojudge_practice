#include <iostream>
using namespace std;

int main(){
    int t,str[4],r;
    cin >> t;
    for(int a=0 ; a<t ; a++ ){
        for(int i=0;i<4;i++){
            cin>> str[i];
        }
        for(int b=0;b<4;b++){
            cout << str[b] <<" ";
        }
        if(((str[1]-str[0])==(str[2]-str[1]))&&((str[2]-str[1])==(str[3]-str[2]))){
            r=str[2]-str[1];
            cout << str[3]+r;
        }
        else {
            r=str[2]/str[1];
            cout << str[3]*r;
        }
        cout << endl;
    }



    return 0;
}
