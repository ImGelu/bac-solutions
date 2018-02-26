#include <iostream>

using namespace std;

void calcul(int n, int &x){
    x=0;
    
    while(n){
        if(n%2==0) x=x*10+n%10;
        n/=10;
    }
}

int main(){

    int n, x;

    cin>>n;
    
    calcul(n, x);
    
    cout<<x;

    return 0;
}