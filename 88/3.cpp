#include <iostream>

using namespace std;

int numar(int n, int c1, int c2, int &x){
    x=0;
    int auxN=n;
    bool existaC2=0;

    while(auxN){
        if(auxN%10==c2){
            existaC2=1;
            break;
        }
        auxN/=10;
    }


    if(!existaC2){
        while(n%10!=c1){
            x+=n%10;
            n/=10;
        }
        x+=c1;
    }
    else{
        while(n%10!=c2) n/=10;
        while(n%10!=c1){
            x+=n%10;
            n/=10;
        }
        x+=c1;
    }
}

int main(){

    int n, c1, c2, x;

    cin>>n>>c1>>c2;

    numar(n, c1, c2, x);

    cout<<x;

    return 0;
}