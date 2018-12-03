#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,x1,x2,D;
    while(cin>>a>>b>>c){
        D=pow(b,2)-(4*a*c);
        x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
        if(D==0){
            cout <<  "Two same roots x=" << x1 << endl;
        }
        else if (D>0){
            cout << "Two different roots x1=" << x1 << " , x2=" << x2 <<endl;
        }
        else
            cout << "No real root" << endl;
    }
    return 0;
}
