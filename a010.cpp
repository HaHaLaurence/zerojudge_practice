#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N,t,k;
    while(cin >> N){
        t=N;
        int begin=0;
        for (int i=2; i<=N;i++){
           k=0;
           while(t%i==0){
                t=t/i;
                k++;
            }
            if(k>1){
                if(begin==0){
                    cout  << i << "^" << k ;
                }
                else{
                    cout << " * " << i << "^" << k ;
                }
                begin = 1;
            }

            else if (k==1){
                if(begin==0){
                    cout << i ;
                }
                else{
                    cout << " * "<< i ;
                }
                begin = 1;
            }

            if(t==1)
                break;
        }
        cout << endl;
    }
    return 0;
}



