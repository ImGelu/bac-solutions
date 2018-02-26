#include <iostream>

using namespace std;

int p1(int n){
    int s=0;

    while(n){
        s+=n%10;
        n/=10;
    }
    
    return s;
}

int p2(int &n){
    return n/10;
}

int main(){

    int n, k=0;

    cin>>n;

    while(n){
        if(p1(n)==p1(p2(n))) k++;
        n/=10;
    }

    cout<<k;

    return 0;
}