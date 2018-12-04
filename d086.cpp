#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    int L,sum,flag;
    string word;
    while(cin >> word){
        L=word.length();
        sum=0;
        flag=0;
        if((word[0]==48) && (L==1)){  //或if(word[0]=='0')
            return 0;
        }
        for (int i=0 ; i<L ; i++){
            if((word[i]>='A')&&(word[i]<='Z')){
                word[i]+=32;
            }
            word[i]-=96;
            if((word[i]>26)||(word[i]<1)){
                cout << "Fail" << endl;
                flag++;
                break;
            }
        }
        if(flag>0){
            continue;
        }
        for(int a=0 ; a<L ;a++){
            sum+=word[a];
        }
        cout << sum << endl;
    }
    return 0;
}


