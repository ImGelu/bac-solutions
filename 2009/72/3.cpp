#include <iostream>

using namespace std;

int Cifre(int a, int b){
    int auxA, auxB, k=0;
    bool okA=0, okB=0;

    for(int i=0; i<=9; i++){
        auxA=a, auxB=b;
        okA=0, okB=0;

        while(auxA){
            if(auxA%10==i) okA=1;
            auxA/=10;
        }

        while(auxB){
            if(auxB%10==i) okB=1;
            auxB/=10;
        }

        if(okA==okB && okA==1) k++;
    }

    return k;
}

int main(){

    int x, p, y;

    cin>>x>>p;

    while(cin>>y)
        if(Cifre(x, y)==3) cout<<y<<" ";

    return 0;
}