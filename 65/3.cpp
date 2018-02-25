#include <iostream>

using namespace std;

bool sfx(int x){
    int n=x%1000;

    while(n>9){
        if(n%10>=n/10%10) return false;
        n/=10;
    }

    return true;
}

int main(){

    int n, n1, n2;

    cin>>n;

    n1=n%1000;
    n2=n/1000;

    if(n/100%10<n2%10 && sfx(n1) && sfx(n2)) cout<<"Da";
    else cout<<"Nu";

    return 0;
}