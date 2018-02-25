#include <iostream>

using namespace std;

int cifra(double x){
    return (int)x%10;
}

int main(){

    double x, y;

    cin>>x>>y;

    if(cifra(x)==cifra(y)) cout<<"Da";
    else cout<<"Nu";

    return 0;
}