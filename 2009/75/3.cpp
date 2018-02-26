#include <iostream>

using namespace std;

void Invers(int n, int &x){
    x=0;

    while(n){
        x=x*10+n%10;
        n/=10;
    }
}

int main(){

    int n, x;

    cin>>n;

    Invers(n, x);

    cout<<x;

    return 0;
}