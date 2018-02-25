#include <iostream>

using namespace std;

int oglindit(int n){
    int aux=0;
    while(n){
        aux=aux*10+n%10;
        n/=10;
    }
    return aux;
}

int f(int a){
    int div=2, exp=0, s=0;
    while(a>1){
        while(a%div==0){
            a=a/div;
            exp++;
        }
        s+=exp;
        exp=0;
        div++;
    }
    return s;
}

int main(){

    //a
    int n;

    cin>>n;

    cout<<f(n);

    //b
    if(f(n)==1 && f(oglindit(n))==1) cout<<"\nDA";
    else cout<<"\nNU";


    return 0;
}