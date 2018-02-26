#include <iostream>

using namespace std;

bool verif(int x){
    int k=1;
    while(x){
        if(x%2==1 && x/10%2==1) k++;
        else k=1;
        x/=10;
        if(k==3) return true;
    }
    return false;
}

int main(){

    int n;

    cin>>n;

    while(n>999) n/=10;

    if(verif(n)) cout<<"Da";
    else cout<<"Nu";

    return 0;
}