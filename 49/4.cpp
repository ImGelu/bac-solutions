#include <iostream>

using namespace std;

void cmax(int a, int &b){
    b=-1;
    while(a){
        if(a%10>b) b=a%10;
        a/=10;
    }
}

int main(){

    int maxim=-1, x, c;

    while(cin>>x){
        cmax(x, c);
        if(c>maxim) maxim=c;
    }

    cout<<maxim;

    return 0;
}