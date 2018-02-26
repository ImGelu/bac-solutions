#include <iostream>

using namespace std;

int main(){

    double i1, i2, k=1, x, maxim;

    cin>>x;
    maxim=x;
    i1=1;

    while(cin>>x){
        k++;
        if(x>maxim){
            i1=k;
            maxim=x;
        }
        else if(x==maxim) i2=k;
    }

    cout<<i1<<" "<<i2;

    return 0;
}